// sub_2774880
// rva 0x02774880  size 3049  section .text  group text
// window base 0x182774880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2774880(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r14
  _QWORD *v15; // r15
  __int64 v16; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v27[7]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-30h]
  __int64 v29; // [rsp+40h] [rbp-28h]
  __int64 v30; // [rsp+48h] [rbp-20h]
  __int64 v31; // [rsp+50h] [rbp-18h]
  int v32; // [rsp+5Ch] [rbp-Ch]
  unsigned int v33; // [rsp+60h] [rbp-8h]
  int v34; // [rsp+64h] [rbp-4h]

  v31 = a5;
  v34 = a6;
  v30 = a1;
  if ( (unsigned __int64)v27 <= v15[1] )
  {
    v28 = a3;
    sub_1EB84E0();
LABEL_6:
    v28 = a3;
    v18 = v15[5];
    v33 = v34 >= 256;
    v19 = v34 >= 256;
    v20 = v18 + (((unsigned int)(18 << v19) + 19LL) & 0x1FFFFFFF8LL);
    if ( v20 > v15[4] )
    {
      v18 = sub_1EAA840(a1: 34082368, a2: v16, a3: 34082368);
    }
    else
    {
      v15[5] = v20;
      *(_QWORD *)v18 = 34082368;
      *(_DWORD *)(v18 + 8) = 18 << v19;
    }
    v29 = v18;
    if ( v34 < 256 )
      goto LABEL_13;
    sub_4FF2C40(a1: 1, a2: v16, a3: v14 + 373281248, a4: v19, a5: v18, a6: 18);
    while ( 1 )
    {
      v22 = sub_50117E0(a1: (unsigned int)v34, a2: v14 + 58184840, a3: 18, a4: v21, a5: v33, a6: v29);
      v25 = v15[5];
      if ( (unsigned __int64)(v25 + 24) > v15[4] )
      {
        v32 = v22;
        v25 = sub_1EAA920(a1: v23, a2: v24, a3: 34082680);
      }
      else
      {
        v15[5] = v25 + 24;
        *(_DWORD *)v25 = 34082680;
        *(_DWORD *)(v25 + 4) = 0;
        *(_QWORD *)(v25 + 8) = 0;
        *(_QWORD *)(v25 + 16) = 0;
      }
      v26 = v29;
      *(_BYTE *)(v25 + 12) = v33;
      *(_DWORD *)(v25 + 4) = (unsigned __int64)(v26 - v14) >> 3;
      sub_28C1C40();
LABEL_13:
      sub_1EB4960(a1: 18, a2: 0, a3: v14 + 376351544, a4: v19, a5: 0, a6: v29);
    }
  }
  v16 = v14 + 8LL * *(unsigned int *)(a3 + 8);
  v29 = v16;
  if ( a5 != v14 )
  {
    v33 = *(unsigned __int8 *)(a3 + 20);
    v27[6] = v14 + 8LL * *(unsigned int *)(a3 + 4);
    if ( (unsigned int)a6 <= 0x78 )
      __asm { jmp     r10; switch jump }
    goto LABEL_6;
  }
  return sub_182774939(a1, a2: v16, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}
