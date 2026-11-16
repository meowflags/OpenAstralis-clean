// sub_1850374A0
// rva 0x050374a0  size 671  section .text  group text
// window base 0x1850374a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1850374A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 result; // rax
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-30h]
  unsigned __int64 v24; // [rsp+10h] [rbp-28h]
  __int64 v25; // [rsp+18h] [rbp-20h]
  __int64 v26; // [rsp+20h] [rbp-18h]
  _DWORD *v27; // [rsp+28h] [rbp-10h]
  unsigned int v28; // [rsp+34h] [rbp-4h]

  v27 = (_DWORD *)a3;
  v26 = a6;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_25:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    return sub_185037740();
  }
  *(_DWORD *)(a3 + 8) = 0;
  v8 = *(_QWORD *)(v7 + 40);
  v9 = v8 + 80;
  if ( (unsigned __int64)(v8 + 80) > *(_QWORD *)(v7 + 32) )
  {
    v25 = a5;
    v8 = MEMORY[0x181EAA840](a1, a2, a3: 43307208, a4: v9, a5: 16);
    a5 = v25;
    a3 = (unsigned __int64)v27;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v9;
    *(_QWORD *)v8 = 43307208;
    *(_DWORD *)(v8 + 8) = 16;
    *(_DWORD *)(v8 + 12) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0;
    *(_QWORD *)(v8 + 72) = 0;
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(v8 - v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
  }
  if ( a5 == v6 )
    goto LABEL_25;
  v24 = v8;
  v10 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v10 + 32) > *(_QWORD *)(v7 + 32) )
  {
    v25 = a5;
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 43307320);
    a5 = v25;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v10 + 32;
    *(_DWORD *)v10 = 43307320;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
  }
  v11 = *(_DWORD *)(a5 + 4) & 0xF;
  v25 = a5;
  v28 = v11;
  v23 = (_DWORD *)v10;
  MEMORY[0x1853F1120](a1, a2: a5, a3: v10, a4: v10, a5, a6: v6);
  v12 = (unsigned __int64)v23;
  v23[5] = (unsigned __int64)(v26 - v6) >> 3;
  if ( (*(_DWORD *)v12 & 2) != 0 )
  {
    v17 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v17) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v17) >> 9) + 0x38) = 0;
  }
  v13 = v28;
  result = v24;
  *(_DWORD *)(v24 + 4LL * v28 + 12) = (v12 - v6) >> 3;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v18 = result;
    if ( (*(_DWORD *)result & 1) != 0 )
    {
      v21 = result - *(_QWORD *)(result - 8);
      result = (unsigned __int64)(4 * v13 + 12) >> 9;
      if ( *(_BYTE *)(v21 + result + 48) != 0 )
        *(_BYTE *)(v21 + result + 48) = 0;
    }
    else
    {
      v19 = result & 0xFFFFFFFFFFF80000LL;
      result = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      v20 = (v18 - result) >> 9;
      if ( *(_BYTE *)(v19 + v20 + 56) != 0 )
        *(_BYTE *)(v19 + v20 + 56) = 0;
    }
  }
  v15 = v27;
  v27[2] = 1;
  v15[3] = 10;
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
