// sub_184F39C20
// rva 0x04f39c20  size 471  section .text  group text
// window base 0x184f39c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F39C20(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // rsi
  int v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+10h] [rbp-38h]
  __int64 v23; // [rsp+18h] [rbp-30h]
  unsigned __int64 v24; // [rsp+20h] [rbp-28h]
  unsigned int v25; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v26; // [rsp+30h] [rbp-18h]
  unsigned int v27; // [rsp+34h] [rbp-14h]
  unsigned int v28; // [rsp+38h] [rbp-10h]
  unsigned int v29; // [rsp+3Ch] [rbp-Ch]
  unsigned int v30; // [rsp+40h] [rbp-8h]
  unsigned int v31; // [rsp+44h] [rbp-4h]

  v24 = a3;
  v23 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    v31 = a2;
    v30 = a1;
    v28 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_14;
  }
  v31 = a2;
  v30 = a1;
  v8 = *(char *)(a3 + 12);
  v29 = *(_DWORD *)(a3 + 8);
  v28 = a5;
  v27 = v8;
  v22 = v6 + 376643464;
  MEMORY[0x18632A360](a1: v6 + 376643464, a2, a3: a5, a4: v29, a5: v29, a6: v29);
  if ( v23 == v6 )
  {
LABEL_14:
    v16 = MEMORY[0x182771080](a1: v10, a2: v11, a3: v24);
    goto LABEL_15;
  }
  v12 = *(_DWORD *)(v23 + 8);
  v26 = v31 + v30;
  MEMORY[0x18632A360](a1: v22, a2: v11, a3: v30, a4: v9, a5: v31 + v30, a6: v12);
  v13 = v6 + 8LL * *(unsigned int *)(v24 + 4);
  v25 = v31 + v29;
  v16 = sub_184F39060(a1: v14, a2: v15, a3: v13, a4: v31 + v29, a5: v27, a6: v31 + v29);
  if ( v16 == v6 )
  {
LABEL_15:
    MEMORY[0x182771080](a1: v30, a2: v31, a3: v24, a4: v16, a5: v28, a6: v23);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F39E00();
  }
  v22 = v16;
  MEMORY[0x181EB4960](a1: (v31 + v28) << v27, a2: (v29 - v28) << v27, a3: v16, a4: v27, a5: v28 << v27, a6: v16);
  v17 = sub_184F3AAC0(a1: v28, a2: v23, a3: v22, a4: v30, a5: v27, a6: v25, a7: v21, a8: v26);
  v18 = v24;
  if ( v22 != v17 )
    *(_BYTE *)(v24 + 12) = 1;
  *(_DWORD *)(v18 + 4) = (unsigned __int64)(v17 - v6) >> 3;
  if ( (*(_DWORD *)v18 & 2) != 0 )
  {
    v20 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v20) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v20) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v18 + 8) = v25;
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v18;
}
