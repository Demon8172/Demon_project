#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "fstream"
using namespace std;

int main() {
    int o = 0;
    int res;
    while (o< 1) {
        FILE *Demon;
        Demon = fopen("student.txt","a");
        char u[20];
        char p[20];
        printf("+++++++Admin Login+++++++\n");
        printf("Enter Admin Name          :");
        scanf("%s", &u);
        printf("Enter admin %s password :", u);
        scanf("%s",&p);
        if (strcmp(u, "Demon")==0 && strcmp(p, "Demon") == 0 ) {
            printf("\n\n+++++WELOCME Admin Demon!+++++\n");
        }
        else {
            printf("Admin Login Failed");
            break;}
        o++;
        char D[2];
        int r=0;
        char T[100];
        while (r<1000){
            printf("\n$");
            scanf("%s",&T);
            if(strcmp(T,"use_com")==0){
                system("bash add.sh");}
            if(strcmp(T, "add_com")==0) {
                fstream f;
                fstream pu;
                    string s1, s2,s3,s4,s5,s6,w1,input1,filename,file,input3,ST= "\'S iN TXT VALUE",input4,input5,w2;
                    int input2;
                    s1= "#include <stdio.h>\nint main() {\n char ac[10];\n";
                    cout << "command name :: ";
                    cin >> input1;
                    pu.open("command.txt",ios_base::app);
                    pu << "\n"+input1;
                    filename = input1;
                    s2 = "\nFILE * "+ input1;
                    s3=  file+";\n";
                    s4= input1+" = fopen(\"" + input1;
                    s5= ".txt\",\"a\");";
                    s6 = "\nfputs(\"\\n{\\n\","+input1+");\n";
                    w1 = s1+s2+s3+s4+s5+s6;
                    cout<< "input count  ::";
                    cin>> input2;


                    filename.append(".cpp");
                    f.open(filename.c_str(),ios::out);
                    if(f.is_open()){
                        f << w1;
                        int i = 0;

                        while (i  < input2){
                            cout << "input :";
                            cin>>input4;
                            cout << input4<<ST ;
                            cin>>input5;
                            f <<  "\nchar "+input5+"[100];\n"+"printf(\""+input4+" :\");\n"+"scanf(\"%s\",&"+input4+ ");\nfputs(\"\\n"+input5+" : \","+input1+");\nfputs("+input4+","+input1+");";
                            i++;}
                        f << "fputs(\"\\n}\","+input1+");";
                        f <<"\nreturn 0;\n}";
                    }else{cout << "file can\'t open.";}
            }









            if(strcmp(T, "exit")==0) {
                break;
            }
            if(strcmp(T, "Change_File")==0) {
                printf("Do You want change File Name :(Yes | No ) (defult : Enter No) : ");
                scanf("%s",D);
                if (strcmp(D, "Yes")== 0){
                    char newname[20];
                    int ret;
                    char oldname[20];
                    printf("oldname");
                    scanf("%s",oldname);
                    printf("newname");
                    scanf("%s",newname);
                    ret = rename(oldname, newname);
                    if(ret == 0) {
                        printf("File renamed successfully");
                        Demon = fopen(newname, "a");
                    } else {
                        printf("Error: unable to rename the file");
                    }
                } else if (strcmp(D, "No")== 0){
                    printf("delfult name is student.txt");

                }else{
                    printf("Error");
                    break;
                }}
            char *name[18], *mother[100], *father[100], *age[20], *id[10],*fi[3],*cho[20];

            if(strcmp(T, "add_data")==0) {
                printf("Do you want to choose file  or rename and Defult? \nchoose file  -c | \n rename -r \n Defult -d\n");
                scanf("%s",fi);

                if(strcmp(*fi, "-c")==0) {

                    system("dir");
                    printf("\n\n\nchoose:");
                    scanf("%s",cho);
                    Demon = fopen(*cho,"a");

                }

                else if(strcmp(*fi, "-r")==0) {

                    system("dir");
                    printf("\n\n\nchoose:");
                    char newname[20];
                    int ret=0;
                    char oldname[20];
                    printf("oldname");
                    scanf("%s",oldname);

                    printf("newname");
                    scanf("%s",newname);
                    ret = rename(oldname, newname);
                    Demon = fopen(newname,"a");}

                else if(strcmp(*fi, "-d")==0){
                    printf("Defult is student.txt");
                    Demon = fopen("student.txt","a");
                }

                printf("\nEnter Student Name :");
                scanf(" %[^\n]s", name);
                printf("Enter  Age :");
                scanf(" %[^\n]s", age);
                printf("Enter Student  Mother Name:");
                scanf(" %[^\n]s", mother);
                printf("Enter Student Father Name :");
                scanf(" %[^\n]s", father);
                printf("Enter Student ID Number :");
                scanf(" %[^\n]s", id);

                fputs("{\n",Demon);
                fputs("         Students's Info\n     Student's Name : ",Demon);
                fputs(*name,Demon);
                fputs("\n     age            : ",Demon);
                fputs(*age,Demon);
                fputs("\n     father         : ",Demon);
                fputs(*father,Demon);
                fputs("\n     Mother         : ",Demon);
                fputs(*mother,Demon);
                fputs("\n     Id number      : ",Demon);
                fputs(*id,Demon);
                fputs("\n}\n\n",Demon);

                if(Demon == NULL){
                    printf("Denile");}

                else {
                    printf("{\n         Students's Info\n     Student's Name : %s\n      age           : %s\n     father         : %s\n     Mother         : %s\n     Id number      : %s\n}",name, age, father, mother, id);
                    printf("Success storage\n");
                }}

            fclose(Demon);
        }
        return 0;}}
