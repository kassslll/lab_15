#include "images.h"

void Image0(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[4];
    p[0].x = cx;
    p[0].y = cy + 20;
    p[1].x = cx + 20;
    p[1].y = cy - 20;
    p[2].x = cx - 20;
    p[2].y = cy - 20;
    p[3].x = cx;
    p[3].y = cy + 20;

    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[4]{
        cx,      cy - 20,
        cx + 20, cy + 20,
        cx - 20, cy + 20,
        cx,      cy - 20,
    };

    Polyline(hdc, p, 4);
    DeleteObject(hPen);
}
void Image2(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[5]{
        cx,      cy - 20,
        cx + 20, cy,
        cx,      cy + 20,
        cx - 20, cy,
        cx,      cy - 20,
    };

    Polyline(hdc, p, 5);
    DeleteObject(hPen);
}
void Image3(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[5]{
        cx,      cy,
        cx + 20, cy - 20,
        cx,      cy + 20,
        cx - 20, cy - 20,
        cx,      cy,
    };

    Polyline(hdc, p, 5);
    DeleteObject(hPen);
}
void Image4(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[7]{
        cx,      cy,
        cx,      cy + 20,
        cx,      cy - 20,
        cx + 40, cy - 20,
        cx + 20, cy - 10,
        cx + 40, cy,
        cx,      cy,
    };

    Polygon(hdc, p, 7);
    DeleteObject(hPen);
}
void Image5(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[6]{
        cx,      cy,
        cx + 20, cy - 20,
        cx + 20, cy + 20,
        cx - 20, cy + 20,
        cx - 20, cy - 20,
        cx,      cy,
    };

    Polyline(hdc, p, 6);
    DeleteObject(hPen);
}
void PictureV(HDC hdc) {
    int x = 100, y = 50, i = 0;

    do {
        Image0(hdc, x, y, RGB(0, 255, 0));
        y += 70;
        i++;
    } while (i < 6);
}
void PictureH(HDC hdc) {
    int x = 100, y = 50, i = 0;

    do {
        Image0(hdc, x, y, RGB(0, 255, 0));
        x += 50;
        i++;
    } while (i < 8);
}
void PictureVH(HDC hdc) {
    int x, j, y = 50, i = 0;

    do {
        x = 100;
        j = 0;
        do {
            Image0(hdc, x, y, RGB(0, 255, 200));
            x += 50;
            j++;
        } while (j < 8);
        y += 70;
        i++;
    } while (i < 6);
}
void function(HDC hdc, void func(HDC hdc, int cx, int cy, COLORREF color)) {
    func(hdc, 40, 40, RGB(2, 50, 4));
    func(hdc, 140, 40, RGB(28, 150, 24));
    func(hdc, 240, 40, RGB(1, 90, 0));
    func(hdc, 240, 240, RGB(12, 50, 244));
    func(hdc, 40, 240, RGB(222, 250, 24));
}