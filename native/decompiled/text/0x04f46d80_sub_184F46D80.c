// sub_184F46D80
// rva 0x04f46d80  size 542  section .text  group text
// window base 0x184f46d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F46D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F46FA0();
  }
  else
  {
    v6 = *(unsigned __int16 *)(a3 + 4);
    v7 = (unsigned int)(v6 + 128);
    if ( (unsigned int)v7 >= 0x100 )
    {
      v8 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v5 + 32) )
      {
        v24 = *(unsigned __int16 *)(a3 + 4);
        v23 = a3;
        v8 = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
        v6 = v24;
        a3 = v23;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v8 + 16;
        *(_DWORD *)v8 = 34086464;
        *(_DWORD *)(v8 + 4) = 0;
        *(_QWORD *)(v8 + 8) = 0;
      }
      *(_DWORD *)(v8 + 4) = v6;
    }
    else
    {
      v8 = v4 + 8LL * *(unsigned int *)(v4 + 4 * v7 + 376353204);
    }
    v9 = *(_QWORD *)(v5 + 40);
    v10 = v9 + 16;
    v11 = 43286056;
    if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v5 + 32) )
    {
      v22 = v8;
      v23 = a3;
      v9 = MEMORY[0x181EAA840](a1: v10, a2: 43286056, a3: 43286056, a4, a5: 1);
      v8 = v22;
      a3 = v23;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v10;
      *(_QWORD *)v9 = 43286056;
      *(_DWORD *)(v9 + 8) = 1;
      *(_DWORD *)(v9 + 12) = 0;
    }
    *(_DWORD *)(v9 + 12) = (unsigned __int64)(v8 - v4) >> 3;
    v12 = *(_QWORD *)(v5 + 40);
    v13 = v12 + 32;
    if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v5 + 32) )
    {
      v22 = v9;
      v23 = a3;
      v12 = MEMORY[0x181EAA920](a1: v13, a2: v11, a3: 43286168);
      v9 = v22;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v13;
      *(_DWORD *)v12 = 43286168;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      v23 = a3;
    }
    v21 = v12;
    v22 = v9;
    MEMORY[0x185061EA0](a1: v4 + 377151320, a2: v9, a3: v12, a4, a5: v4 + 377133624, a6: v4 + 365339176);
    result = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v5 + 32) )
    {
      result = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 34201016);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = result + 16;
      *(_DWORD *)result = 34201016;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    v18 = v21;
    v19 = (unsigned __int64)(v21 - v4) >> 3;
    *(_DWORD *)(result + 4) = v19;
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v15, a2: v16, a3: v19, a4: v14, a5: v18, a6: v22);
  }
  return result;
}
