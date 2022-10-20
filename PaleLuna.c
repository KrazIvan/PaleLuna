#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int commandChecker(const char *userCommand, const char *validCommand) {
	int letter;
	char convertedUserCommand[666]= "", convertedValidCommand[666]= "";
	for (letter = 0; letter <= strlen(userCommand); letter++)	{
		convertedUserCommand[letter] = toupper(userCommand[letter]);
	}
	for (letter = 0; letter <= strlen(validCommand); letter++)	{
		convertedValidCommand[letter] = toupper(validCommand[letter]);
	}
	if (strcmp(convertedUserCommand, convertedValidCommand) == 0)
		return 1;
	else
		return 0;
}

int main(void) {
    int gold = 0, shovel = 0, rope = 0, door = 0, level = 1, progress = 0, burial = 0, ropeOnForestGround = 0;
    char command[666];
    system("cls");
    printf("-You are in a dark room. Moonlight shines through the window.\n");
    printf("-There is GOLD in the corner, along with a SHOVEL and a ROPE.\n");
    printf("-There is a DOOR to the EAST.\n\n");
    printf("-Command?\n");
    while (level == 1) {
        scanf("%[^\n]%*c", &command);
        if (commandChecker(command, "PICK UP GOLD") && gold == 0 && door == 0) {
            printf("-You picked up GOLD.\n", command);
            gold = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP SHOVEL") && shovel == 0 && door == 0) {
			printf("-You picked up the SHOVEL.\n", command);
			shovel = 1;
            printf("-Command?\n");
		} else if (commandChecker(command, "PICK UP ROPE") && rope == 0 && door == 0) {
			printf("-You picked up ROPE.\n", command);
			rope = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP GOLD") && gold == 0 && door == 1) {
            printf("-You went back and picked up GOLD.\n", command);
            door = 0;
            gold = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP SHOVEL") && shovel == 0 && door == 1) {
			printf("-You went back and picked up the SHOVEL.\n", command);
            door = 0;
			shovel = 1;
            printf("-Command?\n");
		} else if (commandChecker(command, "PICK UP ROPE") && rope == 0 && door == 1) {
			printf("-You went back and picked up ROPE.\n", command);
            door = 0;
			rope = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP GOLD") && gold == 0 && door == 2) {
            printf("-You went back and picked up GOLD. The wind closed the DOOR behind you.\n", command);
            door = 0;
            gold = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP SHOVEL") && shovel == 0 && door == 2) {
			printf("-You went back and picked up the SHOVEL. The wind closed the DOOR behind you.\n", command);
            door = 0;
			shovel = 1;
            printf("-Command?\n");
		} else if (commandChecker(command, "PICK UP ROPE") && rope == 0 && door == 2) {
			printf("-You went back and picked up ROPE. The wind closed the DOOR behind you.\n", command);
            door = 0;
			rope = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP GOLD") && gold == 1) {
            printf("-You already picked up GOLD.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP SHOVEL") && shovel == 1) {
			printf("-You already picked up the SHOVEL.\n", command);
            printf("-Command?\n");
		} else if (commandChecker(command, "PICK UP ROPE") && rope == 1) {
			printf("-You already picked up ROPE.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "GO EAST") && door == 0) {
            printf("-You went EAST.\n", command);
            door = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO EAST") && door == 1) {
			printf("-There is a DOOR in the way.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "OPEN DOOR") && door == 1) {
			printf("-You opened the DOOR.\n", command);
            door = 2;
            printf("-Command?\n");
        } else if (commandChecker(command, "OPEN DOOR") && door == 0) {
			printf("-The DOOR is too far away.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "OPEN DOOR") && door == 2) {
			printf("-You already opened the DOOR.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "GO EAST") && door == 2) {
            printf("-Reap your reward.\n");
            printf("-PALE LUNA SMILES AT YOU.\n");
            printf("-You are in a forest. There are paths to the NORTH, WEST, and EAST.\n");
            printf("-Command?\n");
			level = 2;
        } else if (commandChecker(command, "USE GOLD") && gold == 1) {
			printf("-Not here.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE SHOVEL") && shovel == 1) {
			printf("-Not now.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE ROPE") && rope == 1) {
			printf("-You've already used this.\n", command);
            printf("-Command?\n");
        } else {
            printf("INVALID COMMAND\n");
            printf("-Command?\n");
        }
    }
    while (level == 2) {
        scanf("%[^\n]%*c", &command);
        if (commandChecker(command, "GO WEST") && progress == 0) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 1) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 2) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO EAST") && progress == 3) {
            printf("-You went EAST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 4) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 5) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO EAST") && progress == 6) {
            printf("-You went EAST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 7) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 8) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO EAST") && progress == 9) {
            printf("-You went EAST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 10) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "USE GOLD") && gold == 1) {
			printf("-Not here.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE SHOVEL") && shovel == 1) {
			printf("-Not now.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE ROPE") && rope == 1) {
			printf("-You've already used this.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE GOLD") && gold == 0) {
			printf("-You have no GOLD to use.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE SHOVEL") && shovel == 0) {
			printf("-You have no SHOVEL to use.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE ROPE") && rope == 0) {
			printf("-You have no ROPE to use.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 11) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 12) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 13) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 14) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 15) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 16) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 17) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 18) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 19) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO NORTH") && progress == 20) {
            printf("-You went NORTH.\n", command);
            progress += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "GO WEST") && progress == 21) {
            printf("-You went WEST.\n", command);
            progress += 1;
            printf("-PALE LUNA SMILES WIDE.\n", command);
            printf("-There are no paths.\n", command);
            printf("-PALE LUNA SMILES WIDE.\n", command);
            printf("-The ground is soft.\n", command);
            printf("-PALE LUNA SMILES WIDE.\n", command);
            printf("-Here.\n", command);
            printf("-Command?\n");
            level = 3;
        } else {
            abort();
        }
    }
    while (level == 3) {
        scanf("%[^\n]%*c", &command);
        if (commandChecker(command, "DIG HOLE") && shovel == 1 && burial == 0) {
            printf("-You dug a HOLE.\n", command);
            burial += 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "DIG HOLE") && shovel == 1 && (burial == 1 || burial == 2)) {
            printf("-The HOLE is deep enough already.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "DIG HOLE") && shovel == 0) {
            printf("-You have nothing to dig a HOLE with.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE ROPE") && rope == 1) {
            printf("-You already used this.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE ROPE") && rope == 0) {
            printf("-You have no ROPE to use.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE GOLD") && gold == 1) {
            printf("-How do you want to use GOLD?\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE GOLD") && gold == 0) {
            printf("-You have no GOLD to use.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE SHOVEL") && shovel == 1) {
            printf("-How do you want to use the SHOVEL?\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "USE SHOVEL") && shovel == 0) {
            printf("-You have no SHOVEL to use.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "DROP GOLD") && gold == 1 && burial == 0) {
            printf("-There is no HOLE to drop the GOLD into.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "DROP GOLD") && gold == 0) {
            printf("-You have no GOLD to drop.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "DROP GOLD") && gold == 1 && burial == 1) {
            printf("-You dropped the GOLD in the HOLE.\n", command);
            gold = 0;
            burial += 1;
            printf("Command?\n");
        } else if (commandChecker(command, "PICK UP GOLD") && gold == 1) {
            printf("-You already picked up GOLD.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP GOLD") && gold == 0 && burial == 2) {
            printf("-You picked up GOLD.\n", command);
            gold = 1;
            burial = 1;
            printf("-Command?\n"); 
        } else if (commandChecker(command, "PICK UP GOLD") && gold == 0 && (burial == 1 || burial == 0)) {
            printf("-There is no GOLD to pick up.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "FILL HOLE") && gold == 0 && shovel == 1 && burial == 2) {
            level = 4;
        } else if (commandChecker(command, "FILL HOLE") && shovel == 0 && (burial == 1 || burial == 2)) {
            printf("-You, somehow, have no SHOVEL to fill the HOLE with. How did you even dig it in the first place?\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "FILL HOLE") && shovel == 1 && burial == 1) {
            printf("-You filled the HOLE.\n", command);
            burial = 0;
            printf("-Command?\n");
        } else if (commandChecker(command, "FILL HOLE") && burial == 0 && shovel == 1) {
            printf("-There is no HOLE to fill.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "FILL HOLE") && burial == 0 && shovel == 0) {
            printf("-There is no HOLE to fill, nor do you have a SHOVEL that you would fill it with.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "DROP ROPE") && rope == 0) {
            printf("-You have no ROPE to drop.\n", command);
            printf("-Command?\n");
        } else if (commandChecker(command, "DROP ROPE") && rope == 1) {
            printf("-You dropped ROPE.\n", command);
            rope = 0;
            ropeOnForestGround = 1;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP ROPE") && rope == 0 && ropeOnForestGround == 1) {
            printf("-You picked up ROPE.\n", command);
            rope = 1;
            ropeOnForestGround = 0;
            printf("-Command?\n");
        } else if (commandChecker(command, "PICK UP ROPE") && ropeOnForestGround == 0) {
            printf("There is no ROPE to pick up.\n", command);
            printf("-Command?\n");
        } else {
            printf("INVALID COMMAND\n");
            printf("-Command?\n");
        }
    }
    while (level == 4) {
        printf("\n\nCongratulations\n");
        printf("-- 40.24248 --\n");
        printf("-- -121.4434 --\n\n");
        level = 5;
    }
    while (level == 5) {
        scanf("%[^\n]%*c", &command);
        if (commandChecker(command, "") && !commandChecker(command, ""));
        scanf("%[^\n]%*c", &command);
    }
}