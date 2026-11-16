// sub_185044AC0
// rva 0x05044ac0  size 908  section .text  group text
// window base 0x185044ac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185044AC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  char v30; // [rsp+0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+8h] [rbp-20h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  __int64 v33; // [rsp+20h] [rbp-8h]

  v33 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v11 + 8) )
  {
    v23 = MEMORY[0x181EB84E0]();
    while ( 1 )
    {
      if ( *(_DWORD *)(v10 + 8 * v29 + 16) != 0 )
      {
        v31 = v23;
        MEMORY[0x18208CCA0](a1: v25, a2: v26, a3: v10 + 376668872, a4: v24, a5: 1);
        v23 = v31;
      }
      do
      {
        do
        {
          v23 = MEMORY[0x182769900](a1: v25, a2: v26, a3: v23, a4: v24, a5: &a7);
          v28 = *(unsigned int *)(v10 + 8 * v27 + 4);
        }
        while ( (_DWORD)v28 == 0 );
        v29 = *(unsigned int *)(v10 + 8 * v28 + 8);
      }
      while ( (_DWORD)v29 == 0 );
    }
  }
  v32 = MEMORY[0x18277F7C0]();
  v16 = *(unsigned int *)(v10 + 374455148);
  v17 = v10 + 8 * v16;
  if ( (_DWORD)v16 == 0 )
    return sub_185044B2B(a1: v12, a2: v13, a3: 0, a4: v17, a5: v14, a6: v15, a7, a8, a9, a10);
  if ( v17 == v32 )
    JUMPOUT(0x185044BB9LL);
  v18 = MEMORY[0x18277F7C0](a1: v12, a2: v13, a3: v33);
  result = sub_185047200(a1: v20, a2: v21, a3: v33, a4: v19, a5: v18, a6: 0, a7: v30);
  if ( *(int *)(v11 + 16) <= 0 )
    JUMPOUT(0x185044D85LL);
  return result;
}
