// sub_1815A20C0
// rva 0x015a20c0  size 262  section .text  group text
// window base 0x1815a20c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A20C0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  unsigned int *v7; // rdx
  signed int v8; // ecx
  signed int v9; // ebx
  __int64 v10; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]
  int v16; // [rsp+1Ch] [rbp-1Ch]
  unsigned int *v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+28h] [rbp-10h]
  signed int v19; // [rsp+2Ch] [rbp-Ch]
  unsigned int v20; // [rsp+30h] [rbp-8h]
  unsigned int v21; // [rsp+34h] [rbp-4h]

  v17 = a3;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_1815A21E0();
  }
  else
  {
    v5 = sub_1815A45A0();
    v7 = v17;
    v8 = v17[3];
    v9 = (unsigned int)(v8 + v5) >> 1;
    if ( v9 > v8 )
    {
      v17[3] = v9;
      v12 = v7[5] >> 1;
      v7[5] = v12;
      v10 = *(_QWORD *)(v4 + 40);
      v13 = v7[1];
      if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v4 + 32) )
      {
        v21 = v12;
        v20 = (unsigned int)(v8 + v5) >> 1;
        v19 = v8;
        v18 = v5;
        v16 = v13;
        v15 = v3 + 8 * v13;
        v10 = MEMORY[0x181EAA920](a1: 35799040, a2: v15, a3: 35799040);
        LODWORD(v13) = v16;
        v12 = v21;
        v9 = v20;
        v8 = v19;
        v7 = v17;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v10 + 40;
        *(_DWORD *)v10 = 35799040;
        *(_DWORD *)(v10 + 4) = 0;
        *(_QWORD *)(v10 + 8) = 0;
        *(_QWORD *)(v10 + 16) = 0;
        *(_QWORD *)(v10 + 24) = 0;
        *(_QWORD *)(v10 + 32) = 0;
      }
      v6 = v7[6];
      *(_DWORD *)(v10 + 24) = v6;
      *(_DWORD *)(v10 + 20) = v12;
      *(_DWORD *)(v10 + 16) = v9;
      *(_DWORD *)(v10 + 12) = v8;
      *(_DWORD *)(v10 + 4) = v13;
    }
    else
    {
      v10 = v3;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v6, a2: v10);
    return v10;
  }
}
