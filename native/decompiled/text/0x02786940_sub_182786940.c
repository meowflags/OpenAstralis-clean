// sub_182786940
// rva 0x02786940  size 1211  section .text  group text
// window base 0x182786940: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182786940(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  char v25; // bp
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]
  int v30; // [rsp+3Ch] [rbp-Ch]
  int v31; // [rsp+40h] [rbp-8h]
  int v32; // [rsp+44h] [rbp-4h]

  v5 = v3 + 376651888;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v4 + 8) )
  {
    v17 = MEMORY[0x181EB84E0](a1, a2, a3: v5);
    v32 = v2;
    v31 = v17;
    v29 = v18;
    v30 = v19;
    v22 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: 34082680);
    v25 = v32;
    v26 = v31;
    v27 = v29;
    *(_BYTE *)(v22 + 13) = v30;
    *(_BYTE *)(v22 + 12) = v25;
    *(_DWORD *)(v22 + 8) = v26;
    *(_DWORD *)(v22 + 4) = (unsigned __int64)(v27 - v3) >> 3;
    v29 = v3 + 376612880;
    MEMORY[0x182084840](a1: v23, a2: v24, a3: v3 + 376612880, a4: v22, a5: v22);
    MEMORY[0x1820841E0](a1: v11, a2: v12, a3: v29);
    if ( *(int *)(v4 + 16) <= 0 )
      sub_18277F280(a1: v15, a2: v16, a3: v13, a4: v14);
    return 0;
  }
  else
  {
    sub_182786E00(a1, a2, a3: v5);
    sub_182787020();
    if ( *(int *)(v4 + 16) <= 0 )
      sub_18277F280(a1: v8, a2: v9, a3: v6, a4: v7);
    return 1;
  }
}
