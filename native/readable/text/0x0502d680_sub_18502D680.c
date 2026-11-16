// sub_502D680
// rva 0x0502d680  size 945  section .text  group text
// window base 0x18502d680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502D680(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  int v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  unsigned int *v24; // [rsp+10h] [rbp-18h]
  int v25; // [rsp+1Ch] [rbp-Ch]
  int v26; // [rsp+20h] [rbp-8h]
  unsigned int v27; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v24 = a3;
  v27 = a1;
  a3[5] = 0;
  a3[18] = 0;
  if ( (_DWORD)a1 != 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v26 = a6;
      v23 = a5;
      v8 = sub_1EAA920(a1, a2, a3: 36590208);
      a1 = v27;
      a6 = v26;
      a5 = v23;
      a3 = v24;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 40;
      *(_DWORD *)v8 = 36590208;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = 0;
    }
    a3[16] = (unsigned __int64)(v8 - v6) >> 3;
    if ( (*a3 & 2) != 0 )
    {
      v20 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v20) >> 9) + 0x38) = 0;
    }
  }
  v9 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v7 + 32) )
  {
    v26 = a6;
    v23 = a5;
    v9 = sub_1EAA920(a1, a2, a3: 34085496);
    a1 = v27;
    a6 = v26;
    a5 = v23;
    a3 = v24;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v9 + 16;
    *(_DWORD *)v9 = 34085496;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
  }
  a3[7] = (unsigned __int64)(v9 - v6) >> 3;
  if ( (*a3 & 2) != 0 )
  {
    v17 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v17) >> 9) + 0x38) != 0 )
      *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v17) >> 9) + 0x38) = 0;
  }
  if ( a5 == v6 )
    v10 = v6 + 373281248;
  else
    v10 = a5;
  a3[1] = (unsigned __int64)(v10 - v6) >> 3;
  __faststorefence();
  if ( (*a3 & 2) != 0 )
  {
    v19 = ((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v19) >> 9) + 0x38) != 0 )
      *(_BYTE *)(((unsigned __int64)a3 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)a3 - v19) >> 9) + 0x38) = 0;
  }
  *((_QWORD *)a3 + 10) = __sync_add_and_fetch((volatile signed __int64 *)(v6 + 376624696), 1);
  v11 = *(unsigned int *)(v7 + 72);
  if ( (_DWORD)v11 != 0 )
  {
    v12 = *(unsigned int *)(v6 + 8 * v11 + 72);
    if ( (_DWORD)v12 != 0 )
      v13 = v6 + 8 * v12;
    else
      v13 = v6 + 8 * v11;
  }
  else
  {
    v13 = v6;
  }
  v23 = a5;
  if ( (a6 & 4) != 0 )
    JUMPOUT(0x30A0487B7LL);
  v26 = a6;
  v25 = 1;
  sub_27794E0(a1, a2, a3, a4: v13, a5: 1, a6: v13);
  v15 = (unsigned __int64)v24;
  v24[6] = 4262404;
  result = *(unsigned int *)v15;
  if ( (result & 2) != 0 )
  {
    v18 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (v15 - v18) >> 9;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) = 0;
  }
  if ( v27 != 0 )
  {
    result = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(result + 48) > *(_QWORD *)(v7 + 32) )
    {
      result = sub_1EAA920(a1: v27, a2: v14, a3: 36590096);
      v15 = (unsigned __int64)v24;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = result + 48;
      *(_DWORD *)result = 36590096;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
    }
    *(_BYTE *)(result + 32) = 1;
    *(_DWORD *)(result + 24) = 5;
    *(_QWORD *)(result + 16) = -1;
    *(_DWORD *)(result + 4) = 47151571;
    *(_DWORD *)(v15 + 12) = (unsigned __int64)(result - v6) >> 3;
    if ( (*(_DWORD *)v15 & 2) != 0 )
    {
      v21 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v21) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v21) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 28) = 0;
    __faststorefence();
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
