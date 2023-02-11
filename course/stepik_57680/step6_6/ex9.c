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
int is_crossed(struct Rect a, struct Rect b);

int main(void)
{
    struct Rect r1, r2;
    scan_rect(&r1);
    scan_rect(&r2);
    printf("%d\n", is_crossed(r1, r2));

    return 0;
}

int is_crossed(struct Rect a, struct Rect b)
{
    if (a.lt.x > b.rb.x || b.lt.x > a.rb.x || a.lt.y < b.rb.y || b.lt.y < a.rb.y)
	return 0;
    return 1;
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
