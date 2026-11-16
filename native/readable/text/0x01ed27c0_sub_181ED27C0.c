// sub_1ED27C0
// rva 0x01ed27c0  size 639  section .text  group text
// window base 0x181ed27c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED27C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *result; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  char v31; // [rsp+0h] [rbp-18h] BYREF
  __int64 v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v7 + 8) )
  {
    result = (_DWORD *)sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v31);
LABEL_29:
    sub_276FC00(a1: v22, a2: v23, a3: result, a4: v32, a5: v6 + 8521776);
    __builtin_debugtrap();
    return (_DWORD *)sub_1ED2A40(a1: v29, a2: v30, a3: v28);
  }
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v7 + 32) )
  {
    v8 = sub_1EAA920(a1, a2, a3: 34172224);
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 16;
    *(_DWORD *)v8 = 34172224;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
  }
  v9 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v9 + 48) > *(_QWORD *)(v7 + 32) )
  {
    v32 = v8;
    v9 = sub_1EAA920(a1, a2, a3: 34162832);
    v8 = v32;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v9 + 48;
    *(_DWORD *)v9 = 34162832;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
  }
  *(_DWORD *)(v9 + 20) = 1061158912;
  *(_DWORD *)(v8 + 4) = (unsigned __int64)(v9 - (_QWORD)v6) >> 3;
  if ( (*(_DWORD *)v8 & 2) != 0 )
  {
    v25 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v25) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v25) >> 9) + 0x38) = 0;
  }
  v32 = v8;
  sub_1EDA8A0();
  v13 = (unsigned int)v6[94165086];
  if ( (_DWORD)v13 != 0 )
  {
    v14 = (__int64)&v6[2 * v13];
  }
  else
  {
    v14 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v14 = sub_1EAA920(a1: v11, a2: v12, a3: 35797992);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v14 + 24;
      *(_DWORD *)v14 = 35797992;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
    }
    *(_DWORD *)(v14 + 4) = 47082540;
    v6[94165086] = (unsigned __int64)(v14 - (_QWORD)v6) >> 3;
    v24 = (unsigned __int64)(v6 + 94165080);
    if ( (v6[94165080] & 2) != 0 )
    {
      v26 = v24 & 0xFFFFFFFFFFF80000LL;
      v10 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
      v27 = (v24 - v10) >> 9;
      if ( *(_BYTE *)(v26 + v27 + 56) != 0 )
        *(_BYTE *)(v26 + v27 + 56) = 0;
    }
  }
  v15 = sub_5767A80(a1: v11, a2: v12, a3: v32, a4: v10, a5: v14);
  v18 = *(_QWORD *)(v7 + 40);
  v19 = 34087104;
  if ( (unsigned __int64)(v18 + 16) > *(_QWORD *)(v7 + 32) )
  {
    v33 = v15;
    v20 = sub_1EAA840(a1: v16, a2: v17, a3: 34087104, a4: 34087104, a5: 0);
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v18 + 16;
    *(_QWORD *)v18 = 34087104;
    *(_DWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 12) = 0;
    v20 = v18;
  }
  result = (_DWORD *)sub_586EAA0(a1: v16, a2: v17, a3: v32, a4: v19, a5: v20);
  if ( result != v6 && *result >> 3 != 4260888 )
    goto LABEL_29;
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
