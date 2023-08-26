//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_DRIVER_H
#define EUDEMONIA_DRIVER_H


class Driver {
private:
    int argc;
    char** argv;

public:
    Driver(int argc, char** argv) : argc(argc), argv(argv) {}
    void run();
};


#endif //EUDEMONIA_DRIVER_H
