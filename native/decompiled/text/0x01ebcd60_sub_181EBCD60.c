// sub_181EBCD60
// rva 0x01ebcd60  size 28  section .text  group text
// window base 0x181ebcd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_181EBCD60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v7; // r14d
  __int64 v8; // r15
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  char v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 > *(_QWORD *)(v8 + 8) )
    sub_181EBCD80(a1, a2, a3: v7 + 376656008, a4, a5, a6, a7: v15);
  sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v15);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  sub_181EBCD80(a1: v11, a2: v12, a3: v9, a4: v10, a5: v13, a6: v14, a7);
}
