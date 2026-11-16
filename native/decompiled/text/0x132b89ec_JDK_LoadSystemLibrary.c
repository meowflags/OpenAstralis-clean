// JDK_LoadSystemLibrary
// rva 0x132b89ec  size 205  section .text  group text
// window base 0x1932b89ec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JDK_LoadSystemLibrary(_DWORD a1, __int64 a2, _DWORD a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-148h] BYREF
  _BYTE v21[272]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v22; // [rsp+130h] [rbp-18h]

  if ( (unsigned int)MEMORY[0x794F0](a1: a4, a2, a3: 260, a4: v21) == 0
    || (sub_1932CA281(a1: v4, a2: v5, a3: 545152, a4: v21),
        sub_1932CA281(a1: v6, a2: v7, a3: v6, a4: v21),
        MEMORY[0x79468](a1: v9, a2: v10, a3: v8, a4: v21) == 0) )
  {
    if ( (unsigned int)MEMORY[0x794F8](a1: v4, a2: v5, a3: 260, a4: v21) != 0 )
    {
      sub_1932CA281(a1: v4, a2: v5, a3: 545152, a4: v21);
      sub_1932CA281(a1: v14, a2: v15, a3: v14, a4: v21);
      MEMORY[0x79468](a1: v17, a2: v18, a3: v16, a4: v21);
    }
  }
  return sub_1932C8DE0(a1: v4, a2: v5, a3: v11, a4: (unsigned __int64)&v20 ^ v22, a5: v12, a6: v13);
}
