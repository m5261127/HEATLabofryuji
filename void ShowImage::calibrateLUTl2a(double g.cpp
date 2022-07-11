void ShowImage::calibrateLUTl2a(double g,double h,int y,int x){

    renderunitflag=false;

    // double h =0;
    //double g =0;
    double DN = image[y+6][x+16];
    double DN2 =0;
    double tmp1=0;
    double FT1=0;

    int diameter=0;

    //DN2=DN-darkimage[y+6][x+16];
    //cout<<DN2<<endl;


    if(x==0 && y==0){
        effectivecounter=0;
        for(int s=0;s<328;s++){
            for(int e=0;e<248;e++){
                if(s==0 && e==0 && image[e+6][s+1+16]-darkimage[e+6][s+1+16]>50 && image[e+1+6][s+16]-darkimage[e+1+6][s+16]>50 &&image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(s==327 && e==0 && image[e+6][s-1+16]-darkimage[e+6][s-1+16]>50 && image[e+1+6][s+16]-darkimage[e+1+6][s+16]>50 &&image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(s==0 && e==247 && image[e-1+6][s+16]-darkimage[e-1+6][s+16]>50 && image[e+6][s+1+16]-darkimage[e+6][s+1+16]>50&&image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(s==327 && e==247 && image[e-1+6][s+16]-darkimage[e-1+6][s+16]>50 && image[e+6][s-1+16]-darkimage[e+6][s-1+16]>50&&image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(s==0 && image[e-1+6][s+16]-darkimage[e-1+6][s+16]>50 && image[e+6][s+1+16]-darkimage[e+6][s+1+16]>50 && image[e+6+1][s+16]-darkimage[e+1+6][s+16]>50 &&image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(s==327 && image[e-1+6][s+16]-darkimage[e-1+6][s+16]>50 && image[e+6][s-1+16]-darkimage[e+6][s-1+16]>50 && image[e+1+6][s+16]-darkimage[e+1+6][s+16]>50 && image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(e==0 && image[e+6][s-1+16]-darkimage[e+6][s-1+16]>50 && image[e+1+6][s+16]-darkimage[e+1+6][s+16]>50 && image[e+6][s+1+16]-darkimage[e+6][s+1+16]>50 && image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(e==247 && image[e+6][s-1+16]-darkimage[e+6][s-1+16]>50 && image[e-1+6][s+16]-darkimage[e-1+6][s+16]>50 && image[e+6][s+1+16]-darkimage[e+6][s+1+16]>50 && image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }
                else if(image[e+6][s-1+16]-darkimage[e+6][s-1+16]>50 && image[e-1+6][s+16]-darkimage[e-1+6][s+16]>50 && image[e+6][s+1+16]-darkimage[e+6][s+1+16]>50 && image[e+1+6][s+16]-darkimage[e+1+6][s+16]>50 && image[e+6][s+16]-darkimage[e+6][s+16]>50){
                    effectivecounter++;
                }

            }
        }
    }
    else if(x==0 && y==0 && darkimage[124][124]==-1000){
        effectivecounter=81344;
    }


    /*
    //横軸=直径R
    double size[3];
    size[0] = 55;  //コリメータの直径 不変
    size[1] = 121; //黒体炉の直径　不変
    size[2] = 328; //全面黒体の直径　不変

    //横軸=root(pi/s)
    double area[3];
    area[0] = sqrt(PI/2350);  //コリメータの面積 不変
    area[1] = sqrt(PI/11880);//黒体炉の面積　不変
    area[2] = sqrt(PI/81344); //全面黒体の面積　不変

    //横軸=s/(pi*r*r) rはRの半分
    double spir[3];
    spir[0] =2350/(PI*(size[0]/2)*(size[0]/2));  //コリメータの面積 不変
    spir[1] =11880/(PI*(size[1]/2)*(size[1]/2));;//黒体炉の面積　不変
    spir[2] =81344/(PI*(size[2]/2)*(size[2]/2));; //全面黒体の面積　不変
*/

    //horizontal axis=diameter R
    double size[4];
    size[0] = 55.7;  //diameter of collimator invariant
    size[1] = 125.8; //diameter of blackbody furnace invariant
    size[2] = 328;  //diameter of full blackbody invariant
    size[4] = 300; //diameter 300 invariant

    //horizontal axis = root(pi/s)
    double area[2];
    area[0] = sqrt(PI/2350);  //area of collimator invariant
    area[1] = sqrt(PI/11880);//area of blackbody reactor invariant

    // horizontal axis = s/(pi*r*r) r is half of R
    double spir[2];
    spir[0] =2350/(PI*(size[0]/2)*(size[0]/2));   //area of collimator invariant
    spir[1] =11880/(PI*(size[1]/2)*(size[1]/2));  //area of blackbody reactor invariant



    QString BB;
    QString Furnace;
    QString Colli;

    QString BB_FileDirectory = "/Applications/2019-12-23_00:35:30_443grounddata_BB";
    QString Furnace_FileDirectory = "/Applications/interpolate_f";
    QString Colli_FileDirectory = "/Applications/interpolate_c";

    /*
    QString BB_FileDirectory="/Applications/HEATcalibrationformula/BOX_A/2019-12-23_00:35:30_443grounddata_BB";
    QString Furnace_FileDirectory="/Applications/HEATcalibrationformula/BOX_A/interpolate_f";
    QString Colli_FileDirectory="/Applications/HEATcalibrationformula/BOX_A/interpolate_c";
*/
    QFile file_BB(BB_FileDirectory+"/" + QString::number(x) + "_" + QString::number(y) + ".txt");

    if(file_BB.exists()){
        file_BB.open(QIODevice::ReadOnly);
        QTextStream load(&file_BB);

        load >> BB;

        file_BB.close();

    }else{
        BB = "0,0,0,0,0,0,0";
    }


    QFile file_Furnace(Furnace_FileDirectory+"/" + QString::number(x) + "_" + QString::number(y) + ".txt");
    if(file_Furnace.exists()){
        file_Furnace.open(QIODevice::ReadOnly);
        QTextStream load(&file_Furnace);

        load >> Furnace;

        file_Furnace.close();

    }else{
        Furnace = "0,0,0,0,0,0,0";
    }


    QFile file_Colli(Colli_FileDirectory+"/" + QString::number(x) + "_" + QString::number(y) + ".txt");
    if(file_Colli.exists()){
        file_Colli.open(QIODevice::ReadOnly);
        QTextStream load(&file_Colli);

        load >> Colli;

        file_Colli.close();

    }else{
        Colli = "0,0,0,0,0,0,0";
    }
    double slope[2];
    slope[0] = Colli.section(',',-3,-3).toDouble(); //slope of coli
    slope[1] = Furnace.section(',',-3,-3).toDouble();//slope of BB Furnace


    double intercept[2];
    intercept[0] = Colli.section(',',-2,-2).toDouble(); //intercept of coli
    intercept[1] = Furnace.section(',',-2,-2).toDouble(); //intercept of Furnace

    double lsma0 = 0, lsma1 = 0;
    double lsma2 = 0, lsma3 = 0;
    double lsma4 = 0, lsma5 = 0;
    double lsma6 = 0, lsma7 = 0;


    diameter=2*sqrt(effectivecounter/PI);
    //diameter=130;

    //<<diameter<<endl;

    //double dist = sqrt((x-164)**2.0 + (y-124)**2.0);

    if(diameter<300){
        lsm_slope(size, slope, &lsma0, &lsma1);
        g=lsma1*diameter + lsma0;
        lsm_intercept(size, intercept, &lsma2, &lsma3);

        h=lsma3*diameter + lsma2;
        FT1=round1((DN-h)/g);
        tmp1 =gettemperature_epsillon1(FT1);

        if(tmp1+273.15>150){
            calibrationImage[y][x] = tmp1 + 273.15;
            fitstemperature2[y][x] = tmp1 + 273.15;
        }
        else{
            /*
            calibrationImage[y+6][x+16] = tmp1 + 273.15;
            fitstemperature2[y][x] = tmp1 + 273.15;
            */

            calibrationImage[y][x] = 150;
            fitstemperature2[y][x] = 150;

        }

    }
    else{
        lsm_slope(size, slope, &lsma0, &lsma1);

        double size_threeh[2];
        size_threeh[0] = 300; //300
        size_threeh[1] = 328;

        double slope_threeh[2];
        slope_threeh[0] = lsma1*300 + lsma0; //Slope by 300
        slope_threeh[1] = lsma1*328 + lsma0; //Slope of all BB
        lsm_slope_threeh(size_threeh,slope_threeh,&lsma4, &lsma5);

        //  printf("a4=%f\na5=%f\n", lsma5, lsma4);

        double g_threeh=lsma5*diameter + lsma4;
        lsm_intercept(size, intercept, &lsma2, &lsma3);

        double intercept_threeh[2];
        intercept_threeh[0] = lsma3*300 + lsma2; //intercept by 300
        intercept_threeh[1] = lsma3*328 + lsma2; //intercepy of all BB

        lsm_intercept_threeh(size_threeh,intercept_threeh,&lsma6, &lsma7);

        //  printf("a6=%f\na7=%f\n", lsma7, lsma6);

        double h_threeh=lsma7*diameter + lsma6;

        FT1=round1((DN-h_threeh)/g_threeh);


        tmp1 =gettemperature_epsillon1(FT1);
        if(tmp1+273.15>150){

            calibrationImage[y+6][x+16] = tmp1 + 273.15;
            fitstemperature2[y][x] = tmp1 + 273.15;
        }
        else{
            calibrationImage[y+6][x+16] = 150;
            fitstemperature2[y][x] = 150;
        }

    }
    bunit = 'K';
    setWidth(328);
    setHeight(248);
    this->resize(getWidth()+100,getHeight()+20);

}