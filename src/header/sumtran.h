class sumtran{
	sumtran::sumtran();	//public constructor
	sumtran::~sumtran();	//public destructor
	
private:
	int *a;			//global array for input data;
	struct node
	{
		int value;
		int posx,posy;
		struct node *down;
		struct node *right;
	};
	void create_tree(struct node *root,int posx,int posy);
public:			
	void init(int n);
	void print();
	
}
