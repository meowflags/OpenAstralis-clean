// sub_15A4960
// rva 0x015a4960  size 480  section .text  group text
// window base 0x1815a4960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A4960(int a1, int a2, __int64 a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 j; // rdx
  __int64 v14; // r8
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *i; // r8
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // rcx
  __int64 result; // rax
  _DWORD *v24; // r9
  char v25; // [rsp+0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+8h] [rbp-40h]
  unsigned int v27; // [rsp+14h] [rbp-34h]
  _DWORD *v28; // [rsp+18h] [rbp-30h]
  _DWORD *v29; // [rsp+20h] [rbp-28h]
  _DWORD *v30; // [rsp+28h] [rbp-20h]
  __int64 v31; // [rsp+30h] [rbp-18h]
  _DWORD *v32; // [rsp+38h] [rbp-10h]
  int v33; // [rsp+40h] [rbp-8h]
  unsigned int v34; // [rsp+44h] [rbp-4h]

  v31 = a3;
  v30 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
LABEL_30:
    sub_2771080();
LABEL_31:
    sub_2771220(a1: v11, a2: v15, a3: (unsigned int)v7, a4: v31, a5: v6);
    return sub_15A4B40();
  }
  if ( a5 == v9 )
  {
    result = sub_15A4820(a1, a2, a3, a4, (int)a5, a6);
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_15A4C20(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v25);
  j = v31;
  v14 = *(unsigned int *)(v31 + 12);
  v15 = &v9[2 * v14];
  v29 = v15;
  if ( (_DWORD)v14 == 0 )
    goto LABEL_30;
  v6 = v9[2 * v14 + 2];
  v34 = v6;
  v16 = v6;
  for ( i = v30; ; i = v30 )
  {
LABEL_5:
    v7 = (unsigned int)(v16 - 1);
    if ( v16 < 1 )
    {
      v33 = v16 - 1;
      if ( *(int *)(v10 + 16) <= 0 )
        sub_277F280(a1: v11, a2: v12, a3: j, a4: v15, a5: i);
      return 0;
    }
    if ( v6 <= (unsigned int)v7 )
      goto LABEL_31;
    v12 = (unsigned int)v15[v7 + 3];
    if ( (_DWORD)v12 != 0 )
      break;
    v33 = v16 - 1;
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280(a1: v11, a2: v12, a3: j, a4: v15, a5: i);
    v16 = v33;
    v15 = v29;
  }
  v33 = v16 - 1;
  v18 = (unsigned int)v9[2 * v12 + 5];
  v32 = (_DWORD *)(v8 + *(_QWORD *)&v9[2 * (*i >> 3) + 20]);
  v28 = &v9[2 * v12];
  v27 = v12;
  if ( ((unsigned int (__fastcall *)(_DWORD *, __int64, _DWORD *, _DWORD *, _DWORD *))v32)(
         a1: v32,
         a2: v12,
         a3: i,
         a4: v15,
         a5: &v9[2 * v18]) != 0 )
  {
    v24 = v28;
  }
  else
  {
    v12 = v27;
    for ( j = (__int64)&v9[2 * v9[2 * v27 + 6]]; ; j = (__int64)&v9[2 * *(unsigned int *)(v26 + 24)] )
    {
      i = v30;
      if ( (_DWORD *)j == v9 )
      {
        v16 = v33;
        v6 = v34;
        v15 = v29;
        goto LABEL_5;
      }
      v22 = &v9[2 * *(unsigned int *)(j + 20)];
      v26 = j;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))v32)(
             a1: v11,
             a2: v12,
             a3: v30,
             a4: v32,
             a5: v22) != 0 )
        break;
    }
    v24 = (_DWORD *)v26;
  }
  if ( *(int *)(v10 + 16) <= 0 )
    sub_277F280(a1: v11, a2: v12, a3: v19, a4: v20, a5: v21, a6: v24);
  return 1;
}
