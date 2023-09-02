package ds;

public interface IQueue
{
	void insert(int d);
	void remove();
	boolean isQFull();
	boolean isQEmpty();
	void qDisplay();
	void qMenu();
}