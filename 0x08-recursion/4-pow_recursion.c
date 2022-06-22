/**
 * _pow_recursion -  a function that returns the value of x raised to y
 * @x: value to raise
 * @y: power
 * Return: Returns the result of the power
 */

int  _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
