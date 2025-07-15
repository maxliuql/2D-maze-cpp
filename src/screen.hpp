#pragma once
class Screen
{
public:
	void init()
	{
		for(int i=0;i<HEIGHT;i++)
			for(int j=0;j<WIDTH;j++)
				if(maze[i][j]==2)
				{
					x=i;
					y=j;
					maze[i][j]=0;
					break;
				}
	}
	
	void up()
	{
		if(!maze[x-1][y])
			x--;
	}
	void down()
	{
		if(!maze[x+1][y])
			x++;
	}
	void left()
	{
		if(!maze[x][y-1])
			y--;
	}
	void right()
	{
		if(!maze[x][y+1])
			y++;
	}
	void update()
	{
		system("cls");
		for(int i=0;i<HEIGHT;i++)
		{
			for(int j=0;j<WIDTH;j++)
			{
				if(i==x&&j==y)
					cout<<"\x1b[38;5;46mME\x1b[38;5;45m";
				else if(maze[i][j])
					cout<<"¨€¨€";
				else
					cout<<"  ";
			}
			cout<<endl;
		}
		if(x==0||x==HEIGHT-1||y==0||y==WIDTH-1)
			exit(0);
	}
private:
	int x,y;
};
