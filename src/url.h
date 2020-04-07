//
// Created by Yunfei on 31/03/2020.
//

#ifndef UNTITLED_URL_H
#define UNTITLED_URL_H

struct Url {
    char host[1000];
    char path[1000];
};

void check_ending(char* url);

int valid_url(char* url);

int check_url(char url[]);

struct Url get_info(char* url);

void to_abs(char* given, char* host, char* path);

int check_visited(char* abs_url, char** total_list, int total);

int check_components(char* url, char* host);


#endif //UNTITLED_URL_H
