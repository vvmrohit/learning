def print_board(varopt):
    












def main():
    print("Welcome to Tic Tac Toe!")
    player1 = ''
    player2 = ''
    opt = ''
    while(True):
        opt = input("Player 1 : Do you want to be X or O? ")
        if(opt == 'X' or opt=='O'):
            break
    player1 = opt
    if(opt == 'X'):
        player2 = 'O'
    else:
        player1 = 'X'
    
    print("Player1 will go first")

    play = ''
    while(True):
        play = input("Are you ready to play? Enter Yes or No. ")
        if(play=="Yes" or play=="No"):
            break;
    
    if(play=="Yes"):
        pass
    else:
        print("You are always Welcome to play!")
    
if __name__ == "__main__":
    main()

    