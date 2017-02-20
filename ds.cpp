//Dumsor System
#include <iostream>
#include <cmath>
#include <cstdlib>

double const StandardTP = 2000.00;
 
using namespace std;


class substations
{
string station_name;
	//Power section 
	public:
	 bool poweroff= false;
     bool poweron = false;
     
     double powershed(int totalgeneratedpower, double percentageshed);
};


class monitoringStation
{ 
	
	void monitorPower ();
};


struct powercompanies
{
	//Member Variable to hold the generators;
	int gen1, gen2, gen3, gen4, gen5, gen6;
	//Member Variable to check for selected generator
	int genselect;
};


struct control_station
{
int totalPowerReceived;
double powershed;
double percentageshed;
};

//Function to calculate the total power shed from the substations
double substations::powershed(int totalpowerR, double percentage)
{
	return  totalpowerR * percentage;
	
}



 void monitoringStation::monitorPower()
 {
 
	     	
 }
 	
 


int main()
{

  

	//Creating the class objects
	powercompanies Akosombo, Akuse, Bui;
	
	//class objects for substations.
	substations Accra, Madina, Tema, Weija;
	
	//main control object
	control_station MainControl;
	 

    
	int allpower = 0;
	double max_power = 0;
	double min_power = 0;

//Passwords
	string defaultpwd = "gec1234";
	string username = "admin";

	

	//Iterations 
int numcount = 3;	
int count = 0;
char panelselect;
char choice;
int sum = 0;
int countgen =1;

char exitprogram;
int genchoice;
cout<<endl;

cout<<"\tGHANA ELECTRIC CORPORATION LOAD SHEDDING SYSTEM \n";
cout<<"\t***********************************************";
cout<<endl;
cout<<endl;

cout<<"ADMINISTRATOR: Enter A \n";
cout<<"GUEST: Enter G \n";
//Authentication panel 

//Select mode
cout<<"-> ";

cin>>panelselect;
switch (panelselect)
{
	case 'A':
		case 'a':
	cout<<endl;	
	//Admin mode	
	cout<<"\t\t\tADMIN MODE  \n";
	
	//UserName and Password Entry
	cout<<"Provide your username and password, you have "<<numcount<< " trials. \n";
	
	cout<<"UserName: ";
	cin>>username;		
    
	cout<<"Password: ";
    cin>>defaultpwd;
    cout<<endl;

	do
	{ 
    
	
	 numcount--;
	 //Main loop password authentication 
    if (defaultpwd == "gec1234" && username == "admin")	
   	
		{
	    system("cls");
		cout<<endl;
		cout<<"\t\tADMIN MODE \n";
		cout<<endl;
		
		
			cout<<"\t\tAKOSOMBO \n";	        
			cout<<"There are 5 generators and a standby generator in the Akosombo Station. \n";
       		cout<<"A single generator can produce up to 164 Megawatts Power. \n";
	        cout<<endl;
		    //	cout<<"How many generators do you want to power on? \n";
			
			do
			{
			
			cout<<"How many generators do you want to power on? 1-5 \n";
			cout<<"-> ";
			cin>>Akosombo.genselect;
			
			

            if (Akosombo.genselect ==1)
			{
				
			    Akosombo.gen1 = 164;
			    
			    allpower +=Akosombo.gen1;
			    sum +=countgen;
			}
			
		    if (Akosombo.genselect == 2)
		    {
		    	Akosombo.gen2 =164 *2;
			    allpower +=Akosombo.gen2;
			    sum +=countgen +1;
		    }
		    
			if (Akosombo.genselect ==3)
		    {
		    	Akosombo.gen3 =164 *3;
			    allpower +=Akosombo.gen3;
			    sum +=countgen +2;
		    }
		    
			if  (Akosombo.genselect == 4)
		    {
		    	Akosombo.gen4 = 164 *4;
				allpower +=Akosombo.gen4;
				sum +=countgen +3;
		    }
		    
		    
			 if   (Akosombo.genselect == 5)
		    {
		    	Akosombo.gen5 = 164 *5;
			    allpower +=Akosombo.gen5;
			    sum +=countgen +4;
		    }
		     
		 				
			}while ((Akosombo.genselect !=1) and(Akosombo.genselect !=2)&& (Akosombo.genselect!=3) && (Akosombo.genselect!=4) && (Akosombo.genselect !=5)) ;
			
			cout<<endl;
			cout<<endl;
			
			
				cout<<"\t \tAKUSE \n";
            cout<<"There are 4 generators and 1 standby generator in the Akuse Station. \n";
       		cout<<"A single generator can produce up to 163 Megawatts Power. \n";
			//cout<<"How many generators do you want to power on? \n";
		    cout<<endl;
		   	do
			{
		    cout<<"How many generators do you want to power on? 1-4 \n";
			cout<<"-> ";
			
			cin>>Akuse.genselect;
			//cout<<"Number out of range, try again \n";
						
			cout<<endl;
			
			
			if (Akuse.genselect ==1)
			{
				
		      Akuse.gen1 = 163;
		      allpower +=Akuse.gen1;
		      sum +=countgen;
			}
		   
		    if (Akuse.genselect == 2)
		    {
		    Akuse.gen2 = (163 *2);
			allpower +=Akuse.gen2;
			sum +=countgen +1;
		    }
		   
		    if (Akuse.genselect ==3)
		    {
		    	Akuse.gen3 =  (163 *3);
			    allpower +=Akuse.gen3;
			    sum +=countgen +2;
		    }
		   
		    if  (Akuse.genselect == 4)
		    {
		         Akuse.gen4 =163 *4;
				 allpower +=Akuse.gen4;
				 sum +=countgen +3;
		    }
		    
		   
		    if   (Akuse.genselect == 5)
		    {
		    Akuse.gen5 =163 *5;
			allpower +=Akuse.gen5;
			sum +=countgen +4;
		    }
		   }while ((Akuse.genselect !=1) &&(Akuse.genselect !=2)&& (Akuse.genselect!=3) && (Akuse.genselect!=4));
         
         
         
           cout<<"\t\t\tBUI \n";
            cout<<"There are 3 generators and 1 Standby generator in the Bui Station. \n";
        	cout<<"A single generator can produce up to 162 Megawatts Power. \n";
		//	cout<<"How many generators do you want to power on? \n";            
		    cout<<endl;
			do
			{
			cout<<"How many generators do you want to power on? 1-3 \n";
			cout<<"-> ";
		//	cout<<"-> ";
			cin>>Bui.genselect;
		
			cout<<endl;
					
			if (Bui.genselect ==1)
			{
				Bui.gen1 = 162;
				allpower +=Bui.gen1;
				sum +=countgen;
			}
		    
			if (Bui.genselect == 2)
		    {
		    Bui.gen2 =162 *2;
			allpower +=Bui.gen2;
			sum +=countgen +1;
		    }
		    
			if (Bui.genselect ==3)
		    {
		    Bui.gen3 = 162 *3;
			allpower +=Bui.gen3;
			sum +=countgen +2;
		    }
		   
		    }while ((Bui.genselect !=1) &&(Bui.genselect !=2)&& (Bui.genselect!=3));
		 
		 cout<<endl;
		 MainControl.totalPowerReceived = allpower;
		 cout<<endl;
		 cout<<"A TOTAL OF "<<sum<<" GENERATORS ARE POWERED ON. \n \n";		 
		 cout<<"TOTAL POWER RECEIVED IN THE MAIN CONTROL STATION: "<<"[ "<<MainControl.totalPowerReceived<<"MW"<<" ]"<<endl;    
	     cout<<endl;
	     
	     
	     
	     
//Condition to Hold Power outages
	     if (MainControl.totalPowerReceived < StandardTP)
	     {
	     	 cout<<"TOTAL POWER RECIEVED IN THE MAIN CONTROL IS LESS THAN THE STANDARD \n"
			  <<"THROUGHPUT [2000MW] \n";
			 cout<<"AUTOMATIC LOAD SHEDDING IS ACTIVATED... \n";
	     	 cout<<endl;
	     	 cout<<"LOAD SHEDDING IS AS FOLLOWS: \n";
			 //Percentage shed goes here
	    //function call to calculate accra sheding
	      MainControl.powershed=  Accra.powershed(MainControl.totalPowerReceived, 0.7); 
		  cout<<"\tAccra substation shedded: "<<MainControl.powershed<<" KVolts"<<endl; 
	      //MainControl.percentageshed == 0.7;
	      
	      MainControl.powershed=  Madina.powershed(MainControl.totalPowerReceived, 0.3); 
		  cout<<"\tMadina substation shedded: "<<MainControl.powershed<<" KVolts"<<endl;
	      cout<<endl;
		 
		  cout<<"For the next 24hrs.. power shedding is as follows: \n";
  
	      //Condition to shed in the substation or zonal stations. 
		    if(Accra.poweron= true){
	        	cout<<"\tAccra is ON \n";
	        }
	        else 
	        cout<<"\tAccra is OFF \n";
	 
	        if(Tema.poweron = false){
	        	cout<<"\tTema is ON \n";
	        }
	        else 
	        cout<<"\tTema is OFF \n";
	 
	        if(Madina.poweron= true){
	        	cout<<"\tMadina is ON \n";
	        }
	        else 
	        cout<<"\tMadina is OFF \n";
	        
	        	     
		    if(Weija.poweron= false){
	        	cout<<"\tWeija is ON \n";
	        }
	        else 
	        cout<<"\tWeija is OFF \n";

              	do
	{
		cout<<"Enter 'y' to exit, or 'n' to go to main program \n";
		cout<<"-> ";
		cin>>exitprogram;
		
		cout<<endl;
		cout<<endl;
			if(exitprogram=='y')
           	{
            cout<<"Program is exiting...";
	        exit(1);	
	        }
	          else if (exitprogram =='n')
            	{
            		
				system("cls");
	         	main();
	            }
		
	} while ((exitprogram !='y') && (exitprogram !='n'));
	     	
	     }
	     else
	     {
	     	cout<<"No Load shedding. All substations are distributing power to all towns. \n";
	     	cout<<"\tAccra is ON \n";
	     	cout<<"\tMadina is ON \n";
	     	cout<<"\tWeija is ON \n";
	     	cout<<"Program is exiting...";
	     	exit(1);
	     }
	     
		    
	  
	  	}
 else if( defaultpwd != "gec1234" || username != "admin")
		    {
	          cout<<endl;
			  cout<<"Username or Password incorrect. Try Again, you have "<<numcount--<< " trial(s). \n";
		      cout<<"UserName:";
			  cin>>username;
			  
			  cout<<"Password:";
			  cin>>defaultpwd;
		      numcount++;
			  
			  if (numcount == 1 && defaultpwd != "gec1234")
		      {
		      	
				cout<<"Wrong password \n";
			    cout<<"You are not authenticated! \n\n";
			    cout<<"Program is exiting... \n";
		    	exit  (1);
		      }
			
	        }
	        
	 
	
}while (count<=3); //Do while loop to iterate password entry trials.	
			

	break;

//Will display the breakdown of powershedding system. No additional information.
		
	case 'G':
	case 'g': 
	cout<<endl;
	cout<<endl;
    cout<<endl;
	system("cls");
	cout<<endl;
	cout<<"\t\t\tGUEST MODE: \n";	
    cout<<endl;
    
	cout<<"For the next 24hrs, if the total power in the Main Receiving station is \n"
	    <<"below the StandardTP, automatic Load Shedding is activated and the breakdown \n"
		<<"is shown in the TABLE below: \n \n";
	cout<<endl;
    cout<<"\t\t\tTABLE A \n\n";
	cout<<"SUBSTATIONS \tPERCENTAGE-SHED \tSTATUS \n";
	cout<<"__________________________________________________________"<<endl;
	cout<<"ACCRA \t\t70% \t\t\tON \n";

	cout<<"__________________________________________________________"<<endl;
	cout<<"MADINA \t\t30% \t\t\tON \n";
 
    cout<<"__________________________________________________________"<<endl;
	cout<<"TEMA \t\t0% \t\t\tOFF \n";
	
	cout<<"__________________________________________________________"<<endl;
	cout<<"WEIJA \t\t0% \t\t\tOFF \n";
	cout<<"__________________________________________________________"<<endl;
	cout<<"TOTAL \t\t100%  \t\t\tLOAD SHEDDING\n";		
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t\tTABLE B \n\n";
	cout<<"If the Total Power in the Main Receiving station is above the StandardTP, \n"
	    <<"no Load Shedding takes place and the power distribution breakdown \n"
		<<"is shown in the TABLE below: \n \n";
	cout<<endl;
	
 
	cout<<"SUBSTATIONS \tPERCENTAGE-SHED \tSTATUS \n";
	cout<<"__________________________________________________________"<<endl;
	cout<<"ACCRA \t\t35% \t\t\tON \n";

	cout<<"__________________________________________________________"<<endl;
	cout<<"MADINA \t\t15% \t\t\tON \n";
 
    cout<<"__________________________________________________________"<<endl;
	cout<<"TEMA \t\t40% \t\t\tON \n";
	
	cout<<"__________________________________________________________"<<endl;
	cout<<"WEIJA \t\t10% \t\t\tON \n";
	cout<<"__________________________________________________________"<<endl;
	cout<<"TOTAL \t\t100%  \t\t\tNO SHEDDING\n";
	cout<<endl;
	cout<<endl;
    
	cout<<"Do you want to exit the program? \n";

    
    //Do while loop to exit the program
	
	do
	{
		cout<<"Enter 'y' to exit, or 'n' to go to main program \n";
		cout<<"-> ";
		cin>>exitprogram;
		
		cout<<endl;
		cout<<endl;
			if(exitprogram=='y')
           	{
            cout<<"Program is exiting...";
	        exit(1);	
	        }
	          else if (exitprogram =='n')
            	{
            		
				system("cls");
	         	main();
	            }
		
	} while ((exitprogram !='y') && (exitprogram !='n'));
	

	
		break;
		
		default:
        cout<<"Invalid Entry \n";
        main();   
	
	   }

    
	return 0;
}
