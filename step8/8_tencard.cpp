#include<stdio.h>

int arr[10000];
int idx;

int Make_dec(int a, int b, int c, int d) {
	a *= 1000;
	b *= 100;
	c *= 10;
	return a + b + c + d;
}

void Get_all_card() {
	int a, b, c, d;
	int bx,cx,dx;
	
	bx = 1;
	cx = 1;
	dx = 1;

	for (a = 1; a <= 9; a++) {
		for (b = bx; b <= 9; b++) {
			for (c = cx; c <= 9; c++) {
				for (d = dx; d <= 9; d++) {
					arr[idx] = Make_dec(a, b, c, d);
					idx++;
					if (a == b && b == c && c == d) {
						dx++;
					}
				}
				if (a == b && b == c) {
					cx++;
				}
				
				
			}
			if (a == b) {
				bx++;
			}
				
		}
		
	}

		
			
				for (d = dx; d <= 9; d++) {
					arr[idx] = Make_dec(a,b,c,d);
					idx++;
				}

}

int* mSort(int arr[]) {
	int t;

	for(int i = 0; i<2;i++)
		for (int j = 0; j < 3; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	return arr;
}

int main() {
	Get_all_card();
	int dec;
	int card[4];
	

	for(int i = 0;i<4;i++)
		scanf("%d", &card[i]);
	
	dec = Make_dec(card[0],card[1],card[2],card[3]);

	for (int i = 0; i < idx; i++) {
		if (arr[i] == dec) {
			printf("%d", i);
			break;
		}
	}

}

/*
1111

1112 / 1113 / 1114 / 1115 / 1116 / 1117 / 1118 / 1119
1122 / 1123 / 1124 / 1125 / 1126 / 1127 / 1128 / 1129
1132 / 1133 / 1134 / 1135 / 1136 / 1137 / 1138 / 1139
1142 / 1143 / 1144 / 1145 / 1146 / 1147 / 1148 / 1149
1152 / 1153 / 1154 / 1155 / 1156 / 1157 / 1158 / 1159
1162 / 1163 / 1164 / 1165 / 1166 / 1167 / 1168 / 1169
1172 / 1173 / 1174 / 1175 / 1176 / 1177 / 1178 / 1179
1182 / 1183 / 1184 / 1185 / 1186 / 1187 / 1188 / 1189
1192 / 1193 / 1194 / 1195 / 1196 / 1197 / 1198 / 1199

1212 / 1213 / 1214 / 1215 / 1216 / 1217 / 1218 / 1219
1222 / 1223 / 1224 / 1225 / 1226 / 1227 / 1228 / 1229
1232 / 1233 / 1234 / 1235 / 1236 / 1237 / 1238 / 1239
1242 / 

2222

2223 / 2224 / 2225 / 2226 / 2227 / 2228 / 2229

2233 /


5 5
#####
#..B#	(4 , 2)
#.#.#	(4 	) 
#RO.#	   
#####


*/