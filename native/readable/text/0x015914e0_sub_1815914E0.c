// sub_15914E0
// rva 0x015914e0  size 320  section .text  group text
// window base 0x1815914e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15914E0(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  unsigned int v20; // ebp
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+8h] [rbp-30h]
  __int64 v28; // [rsp+10h] [rbp-28h]
  __int64 v29; // [rsp+18h] [rbp-20h]
  _DWORD *v30; // [rsp+20h] [rbp-18h]
  int v31; // [rsp+2Ch] [rbp-Ch]
  __int64 v32; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v14 + 8) )
  {
    v30 = a1;
    v32 = a6;
    v29 = a5;
    v28 = a3;
    sub_1EB84E0();
    goto LABEL_12;
  }
  v15 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v15 == 0 )
  {
LABEL_12:
    v30 = a1;
    v32 = a6;
    v29 = a5;
    v28 = a3;
    sub_28C1C40(a1, a2, a3: v13 + 361300432);
  }
  else if ( a5 != v13 )
  {
    v16 = *(unsigned int *)(a5 + 8);
    v12 = *(_DWORD *)(v13 + 8 * v15 + 8);
    if ( v12 <= (unsigned int)v16 )
    {
LABEL_14:
      sub_2771220(a1, a2, a3: (unsigned int)v16, a4: v16, a5: v12);
      return sub_1591620();
    }
    v17 = *(unsigned int *)(v13 + 8 * v15 + 4 * v16 + 12);
    if ( (int)v17 < 0 )
    {
      v31 = v17;
      v32 = a6;
      v28 = a3;
      ++a1[1];
      v20 = a1[3];
      v21 = v13 + 8LL * *(unsigned int *)(a5 + 4);
      v22 = v13 + 8LL * (unsigned int)a1[2];
      v29 = a5;
      v30 = a1;
      v27 = v21;
      sub_57881C0(a1: v20, a2, a3: a1, a4: v21, a5: v21, a6: v22);
      if ( *(int *)(v14 + 16) <= 0 )
        sub_277F280(a1: v24, a2: v25, a3: v23, a4: v27);
      return 0;
    }
    else
    {
      v18 = *(_BYTE *)(a6 + v17);
      if ( *(int *)(v14 + 16) <= 0 )
        return sub_181591596((_DWORD)a1, a2, a3, a4: v16, a5, a6, a7, a8, a9, a10, a11, a12);
      else
        return v18 != 0;
    }
  }
  v30 = a1;
  v32 = a6;
  v28 = a3;
  sub_2771080();
  goto LABEL_14;
}
