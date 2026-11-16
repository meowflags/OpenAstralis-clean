// sub_181E5C7F7
// rva 0x01e5ca40  size 706  section .text  group text
// window base 0x181e5ca40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_181E5C7F7(
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
        __int64 a29,
        __int64 a30,
        __int64 a31)
{
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  double v41; // xmm0_8
  double v42; // xmm1_8
  double v43; // xmm2_8
  double v44; // xmm3_8
  double v45; // xmm4_8
  double v46; // xmm5_8
  double v47; // xmm6_8
  double v48; // xmm7_8
  __int64 v49; // [rsp+0h] [rbp-F0h]
  __int64 v50; // [rsp+F8h] [rbp+8h]

  v50 = v31;
  MEMORY[0x181EB82C0]();
  MEMORY[0x181EB79E0](a1: v32, a2: v33, a3: v50);
  v35 = a11;
  v36 = a10;
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
  v49 = v34;
  if ( v34 == 0 )
    goto LABEL_4;
  v37 = v34;
  MEMORY[0x181EB6D20]();
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v37 + 20), 3, 1) != 3 )
    goto LABEL_5;
  while ( 1 )
  {
    MEMORY[0x182076160](a1: v39, a2: v40, a3: v49);
    v35 = a11;
    v36 = a10;
LABEL_4:
    MEMORY[0x181EB6CE0](a1: v36, a2: v35, a3: 2, a4: v34, a5: 292992448);
    v40 = a11;
    v39 = a10;
    v47 = a14;
    v48 = a15;
LABEL_5:
    MEMORY[0x18277F4A0](
      a1: v39,
      a2: v40,
      a3: 1,
      a4: v38,
      a5: 0,
      a6: v41,
      a7: v42,
      a8: v43,
      a9: v44,
      a10: v45,
      a11: v46,
      a12: v47,
      a13: v48);
  }
}
