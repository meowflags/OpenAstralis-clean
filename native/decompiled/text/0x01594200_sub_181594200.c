// sub_181594200
// rva 0x01594200  size 478  section .text  group text
// window base 0x181594200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_181594200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  _QWORD *v6; // rax
  _BOOL8 result; // rax

  *(_BYTE *)(v5 + 376612484) = *(_BYTE *)(a5 + 25) != 0;
  v6 = *(_QWORD **)(a5 + 8);
  *(_QWORD *)(v5 + 376612160) = *v6;
  *(_BYTE *)(v5 + 376612324) = v6[13] == 1;
  *(_QWORD *)(v5 + 376612168) = v6[1];
  *(_BYTE *)(v5 + 376612325) = v6[14] == 1;
  *(_QWORD *)(v5 + 376612176) = v6[2];
  *(_BYTE *)(v5 + 376612326) = v6[15] == 1;
  *(_QWORD *)(v5 + 376612184) = v6[3];
  *(_BYTE *)(v5 + 376612327) = v6[16] == 1;
  *(_QWORD *)(v5 + 376612192) = v6[4];
  *(_BYTE *)(v5 + 376612328) = v6[17] == 1;
  *(_QWORD *)(v5 + 376612200) = v6[5];
  *(_BYTE *)(v5 + 376612329) = v6[18] == 1;
  *(_QWORD *)(v5 + 376612208) = v6[6];
  *(_BYTE *)(v5 + 376612330) = v6[19] == 1;
  *(_QWORD *)(v5 + 376612216) = v6[7];
  *(_BYTE *)(v5 + 376612331) = v6[20] == 1;
  *(_QWORD *)(v5 + 376612224) = v6[8];
  *(_BYTE *)(v5 + 376612332) = v6[21] == 1;
  *(_QWORD *)(v5 + 376612232) = v6[9];
  *(_BYTE *)(v5 + 376612333) = v6[22] == 1;
  *(_QWORD *)(v5 + 376612240) = v6[10];
  *(_BYTE *)(v5 + 376612334) = v6[23] == 1;
  *(_QWORD *)(v5 + 376612248) = v6[11];
  *(_BYTE *)(v5 + 376612335) = v6[24] == 1;
  *(_QWORD *)(v5 + 376612256) = v6[12];
  result = v6[25] == 1;
  *(_BYTE *)(v5 + 376612336) = result;
  return result;
}
