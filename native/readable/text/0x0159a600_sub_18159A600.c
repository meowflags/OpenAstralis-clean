// sub_159A600
// rva 0x0159a600  size 45  section .text  group text
// window base 0x18159a600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159A600(
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
        __int64 a11,
        int a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        int a25,
        __int64 a26,
        __int64 a27,
        __int64 a28)
{
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v31; // rdx
  int v32; // edi
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD v36[7]; // [rsp-30h] [rbp-C0h] BYREF
  int v37; // [rsp+68h] [rbp-28h]
  int v38; // [rsp+6Ch] [rbp-24h]
  __int64 v39; // [rsp+78h] [rbp-18h]
  __int64 v40; // [rsp+88h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v29 + 8) )
  {
    sub_1EB83C0();
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
    v39 = v35;
    if ( (unsigned __int64)v36 <= *(_QWORD *)(v29 + 8) )
    {
      v38 = v33;
      v37 = v32;
      v36[6] = v31;
      sub_1EB83C0();
    }
    else if ( v34 != v28 )
    {
      return sub_18159A69D(
               a1: v32,
               a2: v33,
               a3: (int)v28 + 376612120,
               a4: (int)v28 + 376612120,
               a5: (int)v28 + 367803600,
               a6: v35,
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
               a28);
    }
    sub_276EFE0();
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
    return sub_159A980();
  }
  else
  {
    if ( *(int *)(v29 + 16) <= 0 )
      sub_277F280();
    return 4;
  }
}
