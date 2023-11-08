/** ****************************************************************************************
* \mainpage stringhe 
*
* @brief 
* esercizi sui file 
* 
* @author Matteo Varano
* @date 06/11/2023
* @version 1.0 versione iniziale
*/

#include <stdio.h>
#include <time.h>

void writeLog(const char *message);

int main(int argc, char *argv[])
{
    writeLog("Messaggio log 1");
    writeLog("Messaggio log 2");
}

void writeLog(const char *message) 
{
    FILE * logFile;
    logFile=fopen("f/log.txt","a");
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

   
    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}
