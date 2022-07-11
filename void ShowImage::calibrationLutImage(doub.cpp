void ShowImage::calibrationLutImage(double g, double h, int y, int x)
{
    double DN = image[y + 6][x + 16];
    double c = 6.125;


    double DN1 = DN - c*(cas_temp - pkg_temp);//(3)
    c = 6.158;
    double DN2 = DN1 - c*(28 - sht_temp);//(4)
    double l2_radiance = (DN2 - h) / g;//(6)
    double l2_temp = 0;
    if(x==0&&y==0){
        string csv = "/Applications/temp_radiance_table.csv";
        stringstream ss;
        ifstream ifs_csv_file(csv);
        string str;
        for (int row = 0; row < 350; row++)
        {
            for (int col = 0; col < 1; col++)
            {
                getline(ifs_csv_file.seekg(0,ios_base::cur),str,',');
                ss.str(str);
                ss>>csv_data[row][col];
                cout<<csv_data[row][col]<<" ";
                ss.str("");
                ss.clear(stringstream::goodbit);
            }
            std::getline(ifs_csv_file.seekg(0,ios_base::cur),str,'\r');
            ss.str(str);
            ss>>csv_data[row][1];
            cout<<csv_data[row][1]<<endl;
            ss.str("");
            ss.clear(stringstream::goodbit);
            cout<<endl;
        }
        ifs_csv_file.close();
        setHeight(248);
        setWidth(328);
        bunit = "K";
    }
    double rad = l2_radiance;
    int temp_i = 0;
    if(rad>=2.589148e-01 && rad<=222.497500){
        for(int i=0;i<350;i++){
            //(7)
            if(csv_data[i][1]>rad){
                temp_i = i;
                l2_temp = ((csv_data[i][0] - csv_data[i-1][0]) / (csv_data[i][1] - csv_data[i-1][1])) * (rad - csv_data[i-1][1]) + (csv_data[i-1][0]);
                //cout<<"("<<csv_data[i][0]<<"-"<<csv_data[i-1][0]<<") / "<<"("<<csv_data[i][1]<<"-"<<csv_data[i-1][1]<<") x ("<<rad<<"-"<<csv_data[i-1][1]<<") + "<<csv_data[i-1][0]<<" = "<<l2_temp<<endl;
                l2_temp = round2(l2_temp);
                break;
            }
        }
    }
    else if(rad>222.497500){
        l2_temp = round2((500.0));
    }
    else if(rad<2.589148e-01){
        l2_temp = round2((150.0));
    }
    calibrationImage[y][x] = l2_temp;
    fitstemperature2[y][x] = l2_temp;

    //cout<<y<<"-"<<x<<" DN->"<<DN<<" DN'->"<<DN1<<" DN''->"<<DN2<<" radiance :"<<l2_radiance<<" temp :"<<l2_temp<<endl;
    //cout<<csv_data[temp_i][0]<<" "<<csv_data[temp_i][1]<<endl;
}