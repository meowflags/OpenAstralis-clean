// sub_181EC2620
// rva 0x01ec2620  size 294  section .text  group text
// window base 0x181ec2620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2620(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]
  __int64 v26; // [rsp+18h] [rbp-10h]
  __int64 v27; // [rsp+20h] [rbp-8h]

  v27 = a5;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v10 + 8) )
  {
    v26 = a3;
    v12 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v23);
LABEL_11:
    v25 = v12;
    v12 = MEMORY[0x182771220](a1: v14, a2: v15, a3: 0, a4: v13, a5: 0);
    goto LABEL_12;
  }
  v11 = *(_DWORD *)(a3 + 4);
  if ( v11 == -1 )
    return sub_181EC26D9(a1, a2, a3, a4, a5, a6: -1, a7, a8, a9);
  v26 = a3;
  v12 = MEMORY[0x181E63DE0](a1, a2, a3: v9 + 376659136, a4, a5: v11, a6: a5);
  if ( *(_DWORD *)(v12 + 8) == 0 )
    goto LABEL_11;
  v16 = *(unsigned int *)(v12 + 12);
  v17 = v9 + 8 * v16;
  if ( (_DWORD)v16 != 0 )
  {
    v16 = *(_DWORD *)(v9 + 8 * v16) >> 3;
    if ( (_DWORD)v16 != 4262015 )
      goto LABEL_13;
  }
  if ( v27 == v9 )
  {
LABEL_12:
    v25 = v12;
    MEMORY[0x182771080](a1: v14, a2: v15, a3: v16, a4: v17);
LABEL_13:
    MEMORY[0x18276FC00](a1: v14, a2: v15, a3: v17, a4: v17, a5: v9 + 34096120);
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
    return sub_181EC2760();
  }
  v24 = v17;
  v25 = v12;
  v18 = MEMORY[0x184F636E0](a1: v14, a2: v15, a3: v27);
  sub_181EC3DC0(a1: v20, a2: v21, a3: v24, a4: v19, a5: v18);
  if ( *(int *)(v10 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v25;
}
