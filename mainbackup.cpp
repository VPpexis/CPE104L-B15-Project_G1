#include <iostream>
#include <stdio.h>

#include "playerNode.h"
#include "playerList.h"

using namespace std;

int main(){
    playerNode n;

    playerList pl;

    pl.print(&n);

	return 0;
}
