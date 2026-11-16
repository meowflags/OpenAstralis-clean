// sub_184F45EE0
// rva 0x04f45ee0  size 261  section .text  group text
// window base 0x184f45ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F45EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  v10 = a3;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  v11 = (unsigned int)(a5 - 1);
  if ( a3 == v8 )
  {
LABEL_21:
    MEMORY[0x182771080](a1, a2, a3, a4: v11);
    goto LABEL_22;
  }
  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 <= (unsigned int)v11 )
  {
LABEL_22:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v11, a4: v11, a5: v6);
    goto LABEL_23;
  }
  v7 = *(unsigned __int16 *)(a3 + 2 * v11 + 12);
  if ( v7 < 0xDC00 || v7 >= 0xE000 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v7;
  }
  if ( (int)v11 > a6 )
  {
    v13 = (unsigned int)(a5 - 2);
    if ( v6 > (unsigned int)v13 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        v10 = MEMORY[0x18277F280]();
      v14 = *(unsigned __int16 *)(v10 + 2 * v13 + 12);
      if ( v14 < 0xD800 )
        return v7;
      if ( v14 < 0xDC00 )
        return (v14 << 10) + v7 - 56613888;
      return v7;
    }
LABEL_23:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v13, a4: v13, a5: v6);
    return v7;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v7;
}
