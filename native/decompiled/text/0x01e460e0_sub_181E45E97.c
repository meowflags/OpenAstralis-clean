// sub_181E45E97
// rva 0x01e460e0  size 819  section .text  group text
// window base 0x181e460e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E45E97(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int128 a14,
        __int128 a15,
        __int128 a16,
        __int128 a17,
        __int128 a18,
        __int128 a19,
        __int128 a20,
        __int128 a21,
        __int128 a22,
        __int128 a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        __int64 a29)
{
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // r15
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  double v38; // xmm0_8
  double v39; // xmm1_8
  double v40; // xmm2_8
  double v41; // xmm3_8
  double v42; // xmm4_8
  double v43; // xmm5_8
  double v44; // xmm6_8
  double v45; // xmm7_8
  __int64 v47; // [rsp+C8h] [rbp-28h]
  __int64 v48; // [rsp+F8h] [rbp+8h]

  v48 = v29;
  MEMORY[0x181EB82C0]();
  MEMORY[0x181EB79E0](a1: v30, a2: v31, a3: v48);
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
  v47 = v32;
  v33 = 0;
  v34 = MEMORY[0x181EB64C0](a1: a10, a2: a11, a3: v32);
  if ( v34 != 0 )
  {
    MEMORY[0x181EB6CE0](a1: v36, a2: v37, a3: v34, a4: v35, a5: 292991456);
    v37 = a11;
    v36 = a10;
    v33 = a29;
    v44 = a14;
    v45 = a15;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v33 + 20), 3, 1) != 3 )
    MEMORY[0x18277F4A0](
      a1: v36,
      a2: v37,
      a3: 1,
      a4: v35,
      a5: 0,
      a6: v38,
      a7: v39,
      a8: v40,
      a9: v41,
      a10: v42,
      a11: v43,
      a12: v44,
      a13: v45);
  MEMORY[0x18277D800](
    a1: v36,
    a2: v37,
    a3: v47,
    a4: v38,
    a5: v39,
    a6: v40,
    a7: v41,
    a8: v42,
    a9: v43,
    a10: v44,
    a11: v45);
  MEMORY[0x182839080]();
  return 0;
}
