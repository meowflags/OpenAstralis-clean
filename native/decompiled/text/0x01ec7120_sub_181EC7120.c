// sub_181EC7120
// rva 0x01ec7120  size 646  section .text  group text
// window base 0x181ec7120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC7120(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // edi
  int v28; // esi
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 i; // rcx
  unsigned int v34; // ecx
  __int64 v35; // rbp
  __int64 v36; // rsi
  char v37; // r10
  unsigned int v38; // ebx
  __int64 v39; // rdi
  __int64 v40; // r8
  __int64 v41; // r9
  char v43; // [rsp+0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+18h] [rbp-40h]
  __int64 v45; // [rsp+20h] [rbp-38h]
  __int64 v46; // [rsp+28h] [rbp-30h]
  __int64 v47; // [rsp+30h] [rbp-28h]
  unsigned int *v48; // [rsp+38h] [rbp-20h]
  __int64 v49; // [rsp+40h] [rbp-18h]
  unsigned int v50; // [rsp+4Ch] [rbp-Ch]
  int v51; // [rsp+50h] [rbp-8h]
  int v52; // [rsp+54h] [rbp-4h]

  v49 = a3;
  v48 = a5;
  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v43);
  }
  else if ( a5 != v8 )
  {
    if ( (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v8[2 * (*a5 >> 3) + 11] & (0x1D2Au >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))] != 7466 )
    {
LABEL_14:
      MEMORY[0x182770780]();
      goto LABEL_15;
    }
    v10 = a5[1];
    if ( (_DWORD)v10 == 0 )
    {
LABEL_15:
      MEMORY[0x182771080]();
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_181EC73C0();
    }
    v47 = MEMORY[0x1827C6220](a1, a2, a3: &v8[2 * v10]);
    v47 = MEMORY[0x181F252C0](a1: v11, a2: v12, a3: v47);
    v15 = MEMORY[0x18289CB80](a1: v13, a2: v14, a3: v48);
    v46 = sub_181EC9000(a1: v16, a2: v17, a3: v15, a4: &v8[2 * v48[4]], a5: &v8[2 * v48[4]]);
    v52 = v48[7] & 0x50DF;
    v51 = MEMORY[0x1828A7F60](a1: v18, a2: v19, a3: v48);
    v45 = MEMORY[0x18289C600](a1: v20, a2: v21, a3: v48);
    v44 = MEMORY[0x18289C820](a1: v22, a2: v23, a3: v48);
    v50 = v48[8];
    v26 = MEMORY[0x18289C8A0](a1: v24, a2: v25, a3: v48);
    v31 = *(_QWORD *)(v9 + 40);
    v32 = v31 + 88;
    if ( (unsigned __int64)(v31 + 88) > *(_QWORD *)(v9 + 32) )
      return sub_181EC733A(a1: v27, a2: v28, a3: v31, a4: v32, a5: v29, a6: v30, a7, a8);
    *(_QWORD *)(v9 + 40) = v32;
    *(_DWORD *)v31 = 34614240;
    *(_DWORD *)(v31 + 4) = 0;
    for ( i = 8; i < 0x58; i += 8LL )
      *(_QWORD *)(v31 + i) = 0;
    v34 = v50;
    v35 = v44;
    v36 = v45;
    v37 = v51;
    v38 = v52;
    v39 = v46;
    v40 = v47;
    v41 = v49;
    *(_DWORD *)(v31 + 76) = -3;
    *(_DWORD *)(v31 + 72) = v34;
    *(_DWORD *)(v31 + 68) = v38;
    *(_DWORD *)(v31 + 64) = -1;
    *(_DWORD *)(v31 + 36) = (unsigned __int64)(v35 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v31 + 32) = (unsigned __int64)(v36 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v31 + 28) = (unsigned __int64)(v39 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v31 + 24) = (unsigned __int64)(v40 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v31 + 20) = (unsigned __int64)(v41 - (_QWORD)v8) >> 3;
    *(_BYTE *)(v31 + 17) = v37;
    *(_DWORD *)(v31 + 12) = (unsigned __int64)(v26 - (_QWORD)v8) >> 3;
    *(_DWORD *)(v31 + 8) = 47082439;
    if ( *(int *)(v9 + 16) <= 0 )
    {
      v47 = v40;
      v46 = v39;
      v45 = v36;
      MEMORY[0x18277F280](a1: v38, a2: v35, a3: v31, a4: v40, a5: v34, a6: v26);
    }
    return v31;
  }
  MEMORY[0x182771080]();
  goto LABEL_14;
}
