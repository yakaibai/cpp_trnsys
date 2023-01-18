/*
Yakai Bai
2023
footballses@163.com
><><><><><><><><><>

Real cpp type for trnsys.

public:
    int npar, nin, nder, nout;
	int staticStore, dynamicStore;
    int mode;

    double* par;
    double* in;
    double* der;
    double* out;
    double* store;
    double* dstore;

    double Timestep, Time;
	int index, CurrentUnit, CurrentType;
	char* type;
	char* message;
*/
#include "cstring"
#include "TRNSYS.h"
//The first letter of the class name should be 'C'
class COscl : public CUserObj{
public:
    //0.
    COscl():CUserObj(){
        preConfig(1,1,0,1);
    };
public:
    //1.
    void initialize(){
        out[0]=0;
        store[0]=in[0];
    };
    //2.1
    void simulateOneTimestep(){
        out[0]=(in[0]-store[0])/Timestep;
    };
    //2.2
    void finalize(){
        simulateOneTimestep();
        store[0]=in[0];
    };
    //3.
    void post(){
      // Nothing to do  
    };
};

//Trim the first letter 'C'
//MFC style
TRNTYPE(Oscl,264)
