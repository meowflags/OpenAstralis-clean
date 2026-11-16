// sub_181EAAEA0
// rva 0x01eaaea0  size 295  section .text  group text
// window base 0x181eaaea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_181EAAEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rax
  char *v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 i; // rcx
  _QWORD *v14; // [rsp+10h] [rbp-38h]
  int v16; // [rsp+2Ch] [rbp-1Ch]
  __int64 v17; // [rsp+30h] [rbp-18h]
  unsigned __int64 v18; // [rsp+38h] [rbp-10h]

  v7 = (unsigned __int64)a6 << *(_DWORD *)(a5 + 32);
  v18 = (v7 + ((*(int *)(a5 + 32) >> 8) & 0xFFF) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = a6;
  v16 = *(_DWORD *)(a5 + 32);
  v8 = (_QWORD *)sub_181EAAB80(a1, a2: v7, a3: v6 + 376657424, a4: v18, a5: v18);
  if ( a5 == v6 )
    JUMPOUT(0x303D34F0CLL);
  *v8 = (a5 - v6) | 2;
  v8[1] = a6;
  v11 = ((v17 << v16) + ((v16 >> 8) & 0xFFF) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 - 16 >= 0x800 )
  {
    memset(v8 + 2, 0, v11 - 16);
    v9 = (char *)v8 + v11;
  }
  else
  {
    for ( i = 16; v11 > i; i += 8LL )
      v8[i / 8] = 0;
  }
  v14 = v8;
  sub_181EAB080(a1: v9, a2: v10, a3: v8, a4: v8, a5: v18);
  return v14;
}
