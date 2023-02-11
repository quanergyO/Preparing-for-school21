#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;
    struct Point rb;
};

void scan_point(struct Point *p);
void scan_rect(struct Rect *r);
void print_point(const struct Point *p);
void print_rect(const struct Rect *r);
int min(int a, int b);
int max(int a, int b);
int is_crossed(const struct Rect a, const struct Rect b);
struct Rect intersection(struct Rect a, struct Rect b);

int main(void)
{
    struct Rect r1, r2;
    struct Rect res;
    scan_rect(&r1);
    scan_rect(&r2);
    if (is_crossed(r1, r2))
	res = intersection(r1, r2);
    print_rect(&res);
	

    return 0;
}

struct Rect intersection(struct Rect a, struct Rect b)
{
    struct Rect res;
    res.lt.y = min(a.lt.y, b.lt.y);
    res.lt.x = max(a.lt.x, b.lt.x);
    res.rb.y = max(a.rb.y, b.rb.y);
    res.rb.x = min(a.rb.x, b.rb.x);
    return res;    
}

int is_crossed(const struct Rect a, const struct Rect b)
{
    if (a.lt.x > b.rb.x || b.lt.x > a.rb.x || a.lt.y < b.rb.y || b.lt.y < a.rb.y)
	return 0;
    return 1;
}

int min(int a, int b)
{
    if (a > b)
	return b;
    return a;
}

int max(int a, int b)
{
    if (a > b)
	return a;
    return b;
}

void print_rect(const struct Rect *r)
{
    print_point(&r->lt);
    print_point(&r->rb);
    putchar('\n');
}

void print_point(const struct Point *p)
{
    printf("(%d;%d) ", p->x, p->y);
}

void scan_rect(struct Rect *r)
{
    scan_point(&r->lt);
    scan_point(&r->rb);
}

void scan_point(struct Point *p)
{
    scanf("%d %d", &p->x, &p->y);
}
