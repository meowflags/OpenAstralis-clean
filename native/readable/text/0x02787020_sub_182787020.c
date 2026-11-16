// sub_2787020
// rva 0x02787020  size 249  section .text  group text
// window base 0x182787020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2787020(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        __int64 a62)
{
  __int64 v62; // r14
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 result; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v81; // [rsp+8h] [rbp-1C0h]
  __int64 v82; // [rsp+18h] [rbp-1B0h]

  if ( (unsigned __int64)&v80 <= *(_QWORD *)(v63 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_7;
  }
  v64 = *(_QWORD *)(v62 + 376181296);
  v65 = v62 + 40543976;
  v82 = v62 + 40543976;
  if ( v64 == 0 )
    return sub_1827870CA(
             a1,
             a2,
             a3: 0,
             a4: v65,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35,
             a36,
             a37,
             a38,
             a39,
             a40,
             a41,
             a42,
             a43,
             a44,
             a45,
             a46,
             a47,
             a48,
             a49,
             a50,
             a51,
             a52,
             a53,
             a54,
             a55,
             a56,
             a57,
             a58,
             a59,
             a60,
             a61,
             a62);
  if ( v64 < 0 )
  {
LABEL_7:
    sub_28C1C40(a1, a2, a3: v62 + 361300432);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2787120(a1: v78, a2: v79, a3: v77);
  }
  v81 = v62 + 376661224;
  sub_1EE6400(a1: 0, a2, a3: v62 + 376661224, a4: v65, a5: 1, a6: v62 + 358520184);
  v66 = v81;
  v81 = v62 + 361720208;
  sub_1EE6400(a1: 0, a2: v68, a3: v66, a4: v67, a5: 1, a6: v62 + 361720208);
  result = sub_4F73060(a1: v70, a2: v71, a3: v82, a4: v69, a5: v81);
  if ( *(int *)(v63 + 16) <= 0 )
    return sub_277F280(a1: v75, a2: v76, a3: v73, a4: v74);
  return result;
}
