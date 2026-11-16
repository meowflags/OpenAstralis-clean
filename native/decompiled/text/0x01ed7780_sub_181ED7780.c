// sub_181ED7780
// rva 0x01ed7780  size 457  section .text  group text
// window base 0x181ed7780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED7780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  char v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+38h] [rbp-30h]
  __int64 v34; // [rsp+40h] [rbp-28h]
  __int64 v35; // [rsp+48h] [rbp-20h]
  __int64 v36; // [rsp+50h] [rbp-18h]
  unsigned int v37; // [rsp+5Ch] [rbp-Ch]
  unsigned int v38; // [rsp+60h] [rbp-8h]
  unsigned int v39; // [rsp+64h] [rbp-4h]

  v36 = a3;
  v39 = a5;
  v35 = a1;
  v34 = a2;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v14 + 8) )
  {
    v38 = a6;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v30);
    goto LABEL_16;
  }
  v15 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v15 == 0 )
  {
LABEL_16:
    v38 = a6;
    v16 = MEMORY[0x182771080]();
    goto LABEL_17;
  }
  v38 = a6;
  v16 = MEMORY[0x1827C6220](a1, a2, a3: v13 + 8 * v15);
  v20 = v36;
  v21 = *(unsigned int *)(v36 + 16);
  v22 = v13 + 8 * v21;
  if ( (_DWORD)v21 == 0 )
  {
LABEL_17:
    v33 = v16;
    MEMORY[0x182771080](a1: v17, a2: v18, a3: v20, a4: v22);
    goto LABEL_18;
  }
  v23 = *(unsigned int *)(v13 + 8 * v21 + 8);
  v24 = v13 + 8 * v23;
  if ( (_DWORD)v23 == 0 )
  {
LABEL_18:
    MEMORY[0x182771080](a1: v35, a2: v34, a3: v20, a4: v22, a5: v39, a6: v38);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181ED7960();
  }
  v25 = *(unsigned int *)(v36 + 24);
  if ( (_DWORD)v25 == 0 )
    return sub_181ED78C7(a1: v17, a2: v18, a3: v36, a4: v22, a5: 0, a6: v19, a7, a8, a9, a10, a11, a12, a13);
  v32 = v24;
  v33 = v16;
  if ( (v39 & 0x80000000) != 0 )
  {
    v26 = 0xFFFFFFFF;
  }
  else
  {
    v31 = v13 + 8 * v25;
    v26 = MEMORY[0x18657B920](a1: v17, a2: v18, a3: v31, a4: v39, a5: v39);
  }
  v27 = *(_QWORD *)(v14 + 40);
  if ( (unsigned __int64)(v27 + 48) > *(_QWORD *)(v14 + 32) )
  {
    v37 = v26;
    v27 = sub_181EAA920(a1: v17, a2: v18, a3: 40472784);
    v26 = v37;
  }
  else
  {
    *(_QWORD *)(v14 + 40) = v27 + 48;
    *(_DWORD *)v27 = 40472784;
    *(_DWORD *)(v27 + 4) = 0;
    *(_QWORD *)(v27 + 8) = 0;
    *(_QWORD *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 24) = 0;
    *(_QWORD *)(v27 + 32) = 0;
    *(_QWORD *)(v27 + 40) = 0;
  }
  v28 = v32;
  v32 = v27;
  sub_181ED74A0(a1: v26, a2: v39, a3: v27, a4: v38, a5: v28, a6: v33, a7: v30, a8: v36, a9: v35, a10: v34);
  if ( *(int *)(v14 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v32;
}
