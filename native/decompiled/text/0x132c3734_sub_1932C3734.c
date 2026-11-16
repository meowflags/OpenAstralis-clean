// sub_1932C3734
// rva 0x132c3734  size 149  section .text  group text
// window base 0x1932c3734: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C3734(_DWORD a1, __int64 a2, _DWORD a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi

  if ( (unsigned int)sub_1932C39D8(a1: a4, a2) != 0 )
    return 4294967294LL;
  v7 = *(_QWORD *)(v4 + 40);
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 72) = 2;
  v8 = *(_DWORD *)(v7 + 44);
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(v7 + 16);
  *(_DWORD *)(v7 + 40) = 0;
  if ( v8 < 0 )
  {
    v8 = -v8;
    *(_DWORD *)(v7 + 44) = v8;
  }
  if ( v8 != 2 )
    JUMPOUT(0x32651D78BLL);
  *(_DWORD *)(v7 + 8) = 57;
  v9 = sub_1932C62D4(a1: v4, a2: v5, a3: 0, a4: 0, a5: 0);
  *(_DWORD *)(v10 + 76) = v9;
  *(_DWORD *)(v7 + 64) = -2;
  sub_1932C69DC(a1: v10, a2: v12, a3: v11, a4: v7);
  return 0;
}
