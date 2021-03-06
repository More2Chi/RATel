#ifndef CONNEXION_H
#define CONNEXION_H

#include "../inc/master.h"

using namespace std;


class Connexion
{
    public:

        Connexion(); 
        
        int openConnexion(); //Connect serveur or re connect to server. 

        //int main(bool is_admin, string path_prog); //Main function of client. #3
        void setToken(string token); //set a_token
        void setIsAdmin(bool is_admin);// set a_is_admin
        void setPathProg(string path_prog); // set a_path_prog
        int setAutoPeristence(); //


        int main(); //Main function of client. #3
        void sendSafe(vector<string> result_of_command); //send data and manage errors
        string recvSafe(); //receives the data and manages possible errors.  and return result
        void checkSend(int &iResult);
        
        void reConnect(); //re connection to the server in case of problem.
        void closeConnexion(); //Close connexion.

        int getSocket(); //Ghetter of socket.


    private:

        int sock_client; 
        string a_token;
        bool a_is_admin;
        string a_path_prog;


};
#endif

