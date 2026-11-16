// sub_1932C5D5C
// rva 0x132c5d5c  size 140  section .text  group text
// window base 0x1932c5d5c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C5D5C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rcx

  if ( (unsigned int)sub_1932C5EA0(a1, a2, a3: a4) != 0 )
    return 4294967294LL;
  v7 = *(_QWORD *)(v5 + 40);
  *(_DWORD *)(v7 + 36) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  if ( *(_DWORD *)(v7 + 16) != 0 )
    *(_DWORD *)(v4 + 76) = *(_DWORD *)(v7 + 16) & 1;
  *(_QWORD *)(v7 + 8) = 16180;
  *(_QWORD *)(v7 + 136) = v7 + 1360;
  *(_QWORD *)(v7 + 104) = v7 + 1360;
  *(_QWORD *)(v7 + 96) = v7 + 1360;
  *(_DWORD *)(v7 + 20) = 0;
  *(_DWORD *)(v7 + 24) = -1;
  *(_DWORD *)(v7 + 28) = 0x8000;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  *(_DWORD *)(v7 + 7136) = 1;
  *(_DWORD *)(v7 + 7140) = -1;
  return 0;
}
