// sub_184F3CA40
// rva 0x04f3ca40  size 428  section .text  group text
// window base 0x184f3ca40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3CA40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r8d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]
  unsigned __int64 v23; // [rsp+10h] [rbp-18h]
  unsigned int v24; // [rsp+1Ch] [rbp-Ch]
  int v25; // [rsp+20h] [rbp-8h]
  int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_15;
  }
  v23 = a3;
  v26 = a5;
  if ( a5 < 0 )
  {
LABEL_15:
    v17 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v17 + 40) > *(_QWORD *)(v8 + 32) )
      goto LABEL_18;
    *(_QWORD *)(v8 + 40) = v17 + 40;
    *(_DWORD *)v17 = 39410368;
    *(_DWORD *)(v17 + 4) = 0;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 32) = 0;
    while ( 1 )
    {
      v22 = v17;
      MEMORY[0x1850138A0](a1, a2, a3: v17);
      MEMORY[0x182769900](a1: v19, a2: v20, a3: v22, a4: v18, a5: &a7);
LABEL_18:
      v17 = MEMORY[0x181EAA920](a1, a2, a3: 39410368);
    }
  }
  v25 = *(_DWORD *)(a3 + 8);
  v9 = (unsigned int)*(char *)(a3 + 12);
  v10 = v7 + 8LL * *(unsigned int *)(a3 + 4);
  v24 = v9;
  result = sub_184F39060(a1, a2, a3: v10, a4: v9, a5: v9, a6: a5);
  v14 = v26;
  if ( v26 > v25 )
  {
    v22 = result;
    MEMORY[0x1857A10A0](
      a1: 0,
      a2: v13,
      a3: result,
      a4: v24,
      a5: (unsigned int)(v25 << v24),
      a6: (unsigned int)(v26 << v24));
    result = v22;
    v14 = v26;
    v15 = v23;
  }
  else if ( v25 > v26 )
  {
    v22 = result;
    v15 = v23;
    *(_BYTE *)(v23 + 13) = 1;
  }
  else
  {
    v15 = v23;
  }
  *(_DWORD *)(v15 + 8) = v14;
  *(_DWORD *)(v15 + 4) = (unsigned __int64)(result - v7) >> 3;
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v16 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v16) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v15, a4: (unsigned int)v25);
  return result;
}
