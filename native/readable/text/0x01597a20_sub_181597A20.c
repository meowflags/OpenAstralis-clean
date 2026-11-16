// sub_1597A20
// rva 0x01597a20  size 685  section .text  group text
// window base 0x181597a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1597A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+10h] [rbp-28h]
  __int64 v34; // [rsp+18h] [rbp-20h]
  __int64 v35; // [rsp+20h] [rbp-18h]
  int v36; // [rsp+2Ch] [rbp-Ch]
  int v37; // [rsp+30h] [rbp-8h]
  unsigned int v38; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v9 + 8) )
  {
    v35 = a3;
    v11 = sub_1EB84E0();
    goto LABEL_18;
  }
  if ( a3 == v8 )
    v10 = v8 + 353301280;
  else
    v10 = a3;
  v35 = a3;
  v34 = v10;
  v11 = sub_50132E0(a1, a2, a3: 2, a4: v10);
  v7 = *(char *)(v34 + 12);
  v13 = v7;
  v14 = (unsigned int)(v11 << *(_BYTE *)(v34 + 12));
  if ( (int)v14 < 0 )
  {
LABEL_18:
    v38 = v7;
    v37 = v11;
    v27 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v27 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v36 = v14;
      v27 = sub_1EAA920(a1: v12, a2: v14, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v27 + 40;
      *(_DWORD *)v27 = 34082880;
      *(_DWORD *)(v27 + 4) = 0;
      *(_QWORD *)(v27 + 8) = 0;
      *(_QWORD *)(v27 + 16) = 0;
      *(_QWORD *)(v27 + 24) = 0;
      *(_QWORD *)(v27 + 32) = 0;
      v36 = v14;
    }
    *(_DWORD *)(v27 + 20) = 46923644;
    *(_DWORD *)(v27 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v27 + 12) = (unsigned __int64)(v27 - v8) >> 3;
    v33 = v27;
    sub_503B9A0(a1: v12, a2: v14, a3: v27, a4: v13, a5: 0);
    v31 = v33;
    *(_DWORD *)(v33 + 8) = 46004603;
    if ( (*(_DWORD *)v31 & 2) != 0 )
      goto LABEL_23;
    goto LABEL_21;
  }
  v36 = *(char *)(v34 + 12);
  v15 = *(_QWORD *)(v9 + 40);
  v16 = *(_QWORD *)(v9 + 32);
  v17 = ((unsigned int)v14 + 19LL) & 0x1FFFFFFF8LL;
  if ( v17 >= 0x20000 || (v17 += v15, v17 > v16) )
  {
    v38 = v7;
    v37 = v11;
    v15 = sub_1EAA840(a1: v17, a2: v14, a3: 34082368, a4: 34082368, a5: (unsigned int)v14, a6: v16);
    v7 = v38;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v17;
    *(_QWORD *)v15 = 34082368;
    *(_DWORD *)(v15 + 8) = v14;
    v37 = v11;
  }
  v33 = v15;
  v38 = v7;
  sub_4FF2C40(a1: v7, a2: v14, a3: v8 + 57669104, a4: v15, a5: v15, a6: 0);
  sub_4FF2C40(a1: v38, a2: v19, a3: v34, a4: v18, a5: v33, a6: 1);
  v22 = *(unsigned int *)(v34 + 4);
  if ( (_DWORD)v22 == 0 )
  {
    while ( 1 )
    {
      v31 = sub_2771080(a1: v20, a2: v21, a3: v33);
LABEL_23:
      v28 = (v31 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v28) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v31 & 0xFFFFFFFFFFF80000LL) + ((v31 - v28) >> 9) + 0x38) = 0;
LABEL_21:
      sub_2769900(a1: v29, a2: v30, a3: v31, a4: v28, a5: &a7);
    }
  }
  sub_4FF2C40(
    a1: v38,
    a2: v21,
    a3: v8 + 57669128,
    a4: (unsigned int)*(char *)(v34 + 12),
    a5: v33,
    a6: (unsigned int)((*(_DWORD *)(v8 + 8 * v22 + 8) >> *(_BYTE *)(v34 + 12)) + 1));
  result = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v9 + 32) )
  {
    result = sub_1EAA920(a1: v23, a2: v24, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = result + 24;
    *(_DWORD *)result = 34082680;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = 0;
  }
  v26 = v33;
  *(_BYTE *)(result + 12) = v36;
  *(_DWORD *)(result + 4) = (unsigned __int64)(v26 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
