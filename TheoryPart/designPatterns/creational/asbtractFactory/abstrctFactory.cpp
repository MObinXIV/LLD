/*
- Factory -> create concrete classes or objects 
- Abstract factory -> create factories that 's going to create objects , (Creates a family of classes) , we add only level before factory
*/

// Briefly ->we wanna create different types of the same thing 

#include<iostream>

#include<string>

using namespace std;

// Interface to create buttons 
class IButton
{
    public:

    virtual void press()=0;
};

class macButton:public IButton
{
    public:

    void press(){

        cout<<"Mac Button pressed\n";
    }
};

class windowsButton : public IButton
{
public:
    void press()
    {

        cout << "windows Button pressed\n";
    }
};

class ITextBox
{
public:
    virtual void showText() = 0;
};

class macText : public ITextBox
{
public:
    void showText()
    {

        cout << "Mac TextBox \n";
    }
};

class windowsText : public ITextBox
{
public:
    void showText()
    {

        cout << "windows TextBox \n";
    }
};

// abstract class to create Os buttons 
class IFactory
{
    public:

    virtual IButton*createButton()=0;
    virtual ITextBox* createText()=0;
};


class macFactory :public IFactory{
    public:
        IButton *createButton()
        {
        return new macButton();
        }

        ITextBox*createText(){
            return new macText();
        }
};

class widowsFactory : public IFactory
{
    public:
        IButton *createButton()
        {
            return new windowsButton();
        }

        ITextBox *createText()
        {
            return new windowsText();
        }
};

// general factory to return our factory instead of consuming user 
class guiAbstractFactory
{

public:

    // we 'll create a static function to indicate function to indicate 

    static IFactory*createFactory(string os){
        if(os=="windows")

            return new widowsFactory();
            else 
            return new macFactory();
    }
};
int main()
{
    cout<<"Enter Your machine Os\n";
    string os;
    cin>>os;

    IFactory*fact= guiAbstractFactory ::createFactory(os); // Get the 

    IButton*button=fact->createButton();

    button->press();

}