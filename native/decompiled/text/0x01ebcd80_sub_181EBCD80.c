// sub_181EBCD80
// rva 0x01ebcd80  size 157  section .text  group text
// window base 0x181ebcd80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_181EBCD80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 i; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // [rsp+10h] [rbp-18h]

  v8 = *(_DWORD *)(v7 + 320);
  v9 = (unsigned int)(v8 + 1);
  *(_DWORD *)(v7 + 320) = v9;
  sub_181EB8240(a1, a2, a3: v8, a4: v9, a5: v9);
  sub_181EBCE20(a1: v10, a2: v11, a3);
  v12 = *(_DWORD *)(v7 + 320);
  v13 = (unsigned int)(v12 - 1);
  *(_DWORD *)(v7 + 320) = v13;
  sub_181EB82C0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v13);
  for ( i = a3; ; i = v25 )
  {
    v20 = MEMORY[0x182769900](a1: v17, a2: v18, a3: i, a4: v16, a5: &a7);
    v21 = *(unsigned int *)(v7 + 320);
    v22 = *(_DWORD *)(v7 + 320) - 1;
    *(_DWORD *)(v7 + 320) = v22;
    v25 = v20;
    sub_181EB82C0(a1: v23, a2: v24, a3: v21, a4: v21, a5: v22);
  }
}
