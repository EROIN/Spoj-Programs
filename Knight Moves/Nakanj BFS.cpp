#include <cstdio>
#include <queue>

using namespace std;

struct P 
{
  char x, y;
  short c;
};

int visit[10][10];

short bfs( P s, P t ) 
{
      queue<P> q;
      int i=0;
      q.push(s);
      while (!q.empty())
      {
      s=q.front();
      q.pop();         //to pop the entry
      if (s.x<0||s.x>7||s.y<0||s.y>7)
      continue;
      if (s.x==t.x&&s.y==t.y)
      return s.c;
    
      if(visit[s.x][s.y])
      continue;
    
      visit[s.x][s.y]=1;
   // printf("%d %d\n",s.x,s.y);
      q.push( ( P ) { s.x + 1, s.y + 2, s.c + 1 } );
      q.push( ( P ) { s.x + 2, s.y + 1, s.c + 1 } );
      q.push( ( P ) { s.x + 2, s.y - 1, s.c + 1 } );
      q.push( ( P ) { s.x + 1, s.y - 2, s.c + 1 } );
      q.push( ( P ) { s.x - 1, s.y - 2, s.c + 1 } );
      q.push( ( P ) { s.x - 2, s.y - 1, s.c + 1 } );
      q.push( ( P ) { s.x - 2, s.y + 1, s.c + 1 } );
      q.push( ( P ) { s.x - 1, s.y + 2, s.c + 1 } );
      }
}

int main() {
  char s[ 3 ], t[ 3 ];
  short n;

  scanf( "%hd", &n );
  while ( n-- ) {
    scanf( "%s %s", s, t );

    for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
    visit[i][j]=0;

    printf( "%hd\n", bfs(
      ( P ) { s[ 0 ] - 'a', s[ 1 ] - '1' },
      ( P ) { t[ 0 ] - 'a', t[ 1 ] - '1' }
    ) );
  }
//scanf("%d",&n);
  return 0;
}
