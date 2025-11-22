//
// Created by OYSmur on 2025/11/2.
//
#include <stdio.h>
#include <math.h>

// 计算两点之间的欧几里得距离
double distance(int x1, int y1, int x2, int y2) {
    int dx = x1 - x2;
    int dy = y1 - y2;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    int n;
    scanf("%d", &n);

    // 存储所有点的坐标
    int points[100][2];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    int count = 0;
    // 检查所有可能的点对
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // 计算距离，如果距离恰好为1，则计数加1
            if (distance(points[i][0], points[i][1], points[j][0], points[j][1]) == 1.0) {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}