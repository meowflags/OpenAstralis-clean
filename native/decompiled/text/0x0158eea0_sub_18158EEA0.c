// sub_18158EEA0
// rva 0x0158eea0  size 392  section .text  group text
// window base 0x18158eea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158EEA0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]
  __int64 v18; // [rsp+18h] [rbp-20h]
  unsigned int v19; // [rsp+24h] [rbp-14h]
  unsigned int *v20; // [rsp+28h] [rbp-10h]
  int v21; // [rsp+30h] [rbp-8h]
  unsigned int v22; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v6 + 8) )
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
    return sub_18158F040();
  }
  else
  {
    v20 = a3;
    v7 = a3[1];
    if ( (_DWORD)v7 != 0 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v6 + 32) )
      {
        v19 = a3[1];
        v8 = MEMORY[0x181EAA840](a1: 34084944, a2, a3: 34084944, a4, a5: 2);
        v7 = v19;
      }
      else
      {
        *(_QWORD *)(v6 + 40) = v8 + 24;
        *(_QWORD *)v8 = 34084944;
        *(_DWORD *)(v8 + 8) = 2;
        *(_DWORD *)(v8 + 12) = 0;
        *(_QWORD *)(v8 + 16) = 0;
      }
      if ( *(_BYTE *)(v5 + 8 * v7 + 8) != 0 )
        JUMPOUT(0x302B1AF0FLL);
      *(_DWORD *)(v8 + 16) = 4390910;
      *(_DWORD *)(v8 + 12) = *(_DWORD *)(v5 + 8 * v7 + 4);
      v18 = v8;
      v17 = v5 + 8 * v7;
      v22 = MEMORY[0x18631FE80](a1: 1, a2, a3: v8, a4: 4390910, a5: 0, a6: 2);
      a3 = v20;
    }
    else
    {
      v22 = 0;
    }
    v9 = a3[2];
    if ( (_DWORD)v9 != 0 )
    {
      v17 = v5 + 8 * v9;
      v21 = sub_18158E720(a1, a2, a3: v17);
      a3 = v20;
    }
    else
    {
      v21 = 0;
    }
    v10 = a3[3];
    v11 = v5 + 8 * v10;
    if ( (_DWORD)v10 != 0 )
    {
      v12 = *(_QWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 8 * v10) >> 3) + 96);
      v17 = v11;
      v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v4 + v12))(a1, a2, a3: v11);
    }
    else
    {
      v13 = 0;
      v17 = v5 + 8 * v10;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      v13 = MEMORY[0x18277F280](a1, a2, a3, a4: v22);
    else
      v14 = v22;
    return 31 * (v21 + 31 * v14) + v13;
  }
}
