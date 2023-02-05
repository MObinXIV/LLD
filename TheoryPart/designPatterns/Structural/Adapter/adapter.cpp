#include<iostream>

using namespace std;

// xml data type class
class XmlData{
    string xmlData;

    public:

    XmlData(string xmlData){
        this->xmlData=xmlData;
    }

    string getXmlData(){
        return xmlData;
    }
};


// tool analyze data in json form
class DataAnalyticsTool{
    string jsonData;

    public:

    DataAnalyticsTool(){}

        DataAnalyticsTool(string jsonData){
            this->jsonData=jsonData;
        }

       virtual void analyseData(){

            cout<<"Analysing data "<<jsonData<<endl;
        }
    

};

// Adapter convert from xml to json then use the tool to analyze

class Adapter :public DataAnalyticsTool
{
        XmlData *xmlData;

         public :

            Adapter(XmlData *xmlData)
        {
            this->xmlData=xmlData;
        }

        // convert from xml to json then alayze
        void analyseData() override {
            // Convert
            cout <<"Converting Xml Data "<<xmlData->getXmlData()<<" to Json Data"<<endl;

            // Analysis

            DataAnalyticsTool::analyseData();

        }
};


// Client only use tool
class Client{

public:
    void processData(DataAnalyticsTool*tool){
        tool->analyseData();
    }
};

int main()
{
    XmlData*xmlData =new XmlData("Sample xml data");


    DataAnalyticsTool*tool= new Adapter(xmlData);

        Client*client=new Client;

        client->processData(tool);

}